
        
        # puts '\nDone.'

    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end