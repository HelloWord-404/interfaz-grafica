import speech_recognition as sr
r = sr.Recognizer()

with sr.Microphone() as source:
    print("Di algo...")
    audio = r.listen(source)

    try:
        texto = r.recognize_google(audio, language="es-ES")  # Cambia el idioma según sea necesario
        with open("C:\proyecto\house_life_tech\output\grabacion.txt","a+",encoding="utf-8") as palabras:
            palabras.writelines(f"{texto} \n ")
        print("Texto reconocido: " + texto)
    except sr.UnknownValueError:
        print("No se pudo reconocer el audio")
    except sr.RequestError as e:
        print("Error en la solicitud: {0}".format(e))
