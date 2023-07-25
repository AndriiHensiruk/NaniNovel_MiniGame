using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;
using Naninovel;

public class BonusManager : MonoBehaviour
{
    [SerializeField] private GameObject firstWheel;
    [SerializeField] private GameObject secondWheel;
    [SerializeField] private GameObject thirdWheel;

    private int _randomValue;
    private float _timeInterval;
    private int _finalAngle;
   
       void Start()
    {
       

    }
    IEnumerator SpinWheels()
    {
        StartCoroutine(Spin(firstWheel));
        yield return new WaitForSeconds(1);
        StartCoroutine(Spin(secondWheel));
        yield return new WaitForSeconds(1);
        StartCoroutine(Spin(thirdWheel));

    }
    private IEnumerator Spin(GameObject gameObject)
    {
        _finalAngle = 0;
        _randomValue = Random.Range(20,30);
        _timeInterval = 0.1f;
        var variableManager = Engine.GetService<ICustomVariableManager>();
        var _playerCoint = variableManager.GetVariableValue("playerCoint");
  
        for (int i = 0; i < _randomValue; i++)
        {
            gameObject.transform.Rotate(0,0,22.5f);
            if (i > Mathf.RoundToInt(_randomValue * 0.5f))
                _timeInterval = 0.2f;
            if (i > Mathf.RoundToInt(_randomValue * 0.85f))
                _timeInterval = 0.4f;
            yield return new WaitForSeconds(_timeInterval);
        }
        if (Mathf.RoundToInt(gameObject.transform.eulerAngles.z) % 45 != 0)
        {
            gameObject.transform.Rotate(0,0,22.5f);
        }
        _finalAngle = Mathf.RoundToInt(gameObject.transform.eulerAngles.z);
        _playerCoint = _finalAngle.ToString();
        variableManager.SetVariableValue("playerCoint", _playerCoint);
        Debug.Log(_playerCoint);
        switch (_finalAngle)
        {
            case 0:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "1 Win";
                break;
            case 45:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "2 Win";
                break;
            case 90:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "3 Win";
                break;
            case 135:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "4 Win";
                break;
            case 180:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "5 Win";
                break;
            case 225:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "6 Win";
                break;
            case 270:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "7 Win";
                break;
            case 315:
                gameObject.transform.parent.GetComponentInChildren<Text>().text = "8 Win";
                break;
            
        }

    }
    public void OnStart()
    {
          StartCoroutine(SpinWheels());
    }
}
