
        
                if params[:name]
          escaped_name = params[:name].shellescape
          keychain_path = '~/Library/Keychains/#{escaped_name}'
        else
          keychain_path = params[:path].shellescape
        end