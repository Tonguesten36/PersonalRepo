import os
import discord
from dotenv import load_dotenv

client = discord.Client()

@client.event
async def on_ready():
    print('We have logged in as {0.user}'.format(client))


@client.event
async def on_message(message):
    if message.author == client.user:
        return

    if message.content.startswith('Hello, Blueblood'):
        await message.channel.send('Hello! My name is BlueBlood!')

client.run("Nzc5OTUzNTc1OTI0NTk2NzU2.X7oCXw.lenBIjO5o5vTfaenlFotVtJUf3c")
