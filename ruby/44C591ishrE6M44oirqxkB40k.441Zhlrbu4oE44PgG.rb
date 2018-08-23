
        
          DATA = :DATA
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      exec(*cmd)
end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end