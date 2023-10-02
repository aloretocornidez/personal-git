import matplotlib.pyplot as plt
import pandas as pd

def main():

    # import data from csv
    df = pd.read_csv('scope_digital_shot.csv')

    # Each Colun in the Pandas Dataframe.
    df["Time"] = df["Time"].map(lambda x: x*(10**6) )


    x=df["Time"]
    y1 = df["SCL"]
    y2 = df["SDA"]



    # Graph Parameters
    title= "Oscilloscope Capture"
    yAxisTitle = "Voltage [V]"
    xAxisTitle = r'Time [$\mu$S]'
    legend = ["SCL", "SDA"]

    


    # Place the Data into the plot oject.
    plt.plot(x, y1, color='#2e3ad6', label=legend[0])
    plt.plot(x, y2, color='#2e8ed6', label=legend[1])


    # Set Parameters
    plt.title(title)
    plt.gca().set_ylabel(yAxisTitle)
    # plt.gca().set_xlabel(r'Time [$\mu$S]')
    plt.gca().set_xlabel(xAxisTitle)
    plt.legend(legend, loc="best")

    # Display plot
    plt.show()
    

if __name__ == "__main__":
    main()




