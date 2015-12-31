# POJO classes Automation sample.

##Generating POJO classes 

###Purpose :
Pojo Classes Automation will provide all data models classes with robust coding standards from Json response. we can create all related model classes with couple of clicks.

###Steps to generate POJO Classes. 

1.Get the response from webservice  in JSON string format.

2.Install JSON Accelerator (mac App). and Launch it

link: https://itunes.apple.com/in/app/json-accelerator/id511324989?mt=12

3 copy & paste the JSON format  in JSON  Accelerator app.

![1](https://raw.github.com/SrinivasaLadi/pojoResponceHandler/master/ResponceHandler/ResponceHandler/screenshots/jsonacceleratorview.png)

    this snapshot refers after adding JSON string in the application.

![2](https://raw.github.com/SrinivasaLadi/pojoResponceHandler/master/ResponceHandler/ResponceHandler/screenshots/jsonacceleratorviewpaste.png)


4.Click on Genarate files button to generate files with user preferred location.

![3](https://raw.github.com/SrinivasaLadi/pojoResponceHandler/master/ResponceHandler/ResponceHandler/screenshots/jsonacceleratoroptions.png)

5.Make sure to select objective c  or core data (objective c )

![4](https://raw.github.com/SrinivasaLadi/pojoResponceHandler/master/ResponceHandler/ResponceHandler/screenshots/jsonacceleratorLanguage.png)

  On selecting objective c it will generate  data models classes with structure of POJO classes. 
  
  On selecting  core data (objective c ) it will generate the data models classes for core data model.
  
6.Give the Name of Main base  “class name” and also specify the Prefix identifier in input fields

7.Submit by chose the folder path to save.


##USAGE

###Integration of generated pojo Classes to Project.

1.Add the POJO generated classes to Project.

2.Call Respective Data filling by allocating the dictionary.

3. #import "DataModels.h" to file which supposed to fill the pojo class objects from json responce


4 Sample code as below

      
        self.arrMeasuremntsObjects = [[NSMutableArray alloc] init];
    
        if ([resultData isKindOfClass:[NSArray class]]) {
            
            NSLog(@"Responce data contains %lu objects ",(unsigned long)[resultData count]);
            for (id data in resultData) {
                MTMeasurements *objMesaurement = [[MTMeasurements alloc] initWithDictionary:data];
                [self.arrMeasuremntsObjects addObject:objMesaurement];

            }
            
            NSLog(@"Coutnt Of Convenrted Objects %li",[self.arrMeasuremntsObjects count]);
            
        }



### Requirements

- will support iOS 6.0 or higher
- Automatic Reference Counting (ARC)

### Author

- [Srinivasa Ladi](https://github.com/SrinivasaLadi) ([@SrinivasaLadi](https://about.me/srinivasaladi))




