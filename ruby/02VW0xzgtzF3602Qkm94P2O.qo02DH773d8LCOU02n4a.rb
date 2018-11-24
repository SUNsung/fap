
        
                unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for Staff category!'
        end
    
    post '/msg' do
  SinatraWorker.perform_async params[:msg]
  redirect to('/')
end
    
        UnitOfWork = Struct.new(:queue, :job) do
      def acknowledge
        # nothing to do
      end
    
            names.inject(Object) do |constant, name|
          constant.const_defined?(name) ? constant.const_get(name) : constant.const_missing(name)
        end
      end
    end
  end