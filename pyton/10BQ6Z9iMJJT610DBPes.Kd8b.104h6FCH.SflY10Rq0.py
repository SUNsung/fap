
        
        def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise