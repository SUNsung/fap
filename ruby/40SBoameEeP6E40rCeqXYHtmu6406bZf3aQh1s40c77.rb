
        
                def variants_params
          variants_key = if params[:product].key? :variants
                           :variants
                         else
                           :variants_attributes
                         end
    
              def update
            spree_authorize! :update, spree_current_order, order_token
    
      puts '\n== Removing old logs and tempfiles =='
  system! 'bin/rails log:clear tmp:clear'