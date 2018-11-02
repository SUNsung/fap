
        
            def limit_reached_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:limit_reached)[0] || false
    end
    
              pipelines.each do |pipeline|
            self.new(pipeline).tap do |preloader|
              preloader.preload_commit_authors
              preloader.preload_pipeline_warnings
              preloader.preload_stages_warnings
            end
          end
        end
    
              def action_icon
            'cancel'
          end
    
              def action_icon
            'retry'
          end
    
          @account_moderation_note = current_account.account_moderation_notes.new(resource_params)
    
          new_email = resource_params.fetch(:unconfirmed_email)
    
        def set_user
      @user = Account.find(params[:account_id]).user || raise(ActiveRecord::RecordNotFound)
    end
    
        helper_method :paginated_instances
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
      def encoded_challenge
    HTMLEntities.new.encode(params['hub.challenge'])
  end
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
          end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end