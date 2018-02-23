  def evernote_consumer_key
    (config = Devise.omniauth_configs[:evernote]) && config.strategy.consumer_key
  end
    
          if respond_to?(:stop)
        stop
      else
        terminate_thread!
      end
    end
    
      def index
    @jobs = Delayed::Job.order('coalesce(failed_at,'1000-01-01'), run_at asc').page(params[:page])
    
          respond_to do |format|
        if new_credentials.map(&:save).all?
          format.html { redirect_to user_credentials_path, notice: 'The file was successfully uploaded.'}
        else
          format.html { redirect_to user_credentials_path, notice: 'One or more of the uploaded credentials was not imported due to an error. Perhaps an existing credential had the same name?'}
        end
      end
    else
      redirect_to user_credentials_path, notice: 'No file was chosen to be uploaded.' 
    end
  end