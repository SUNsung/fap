
        
                  @pipeline = @project.pipelines.latest_successful_for(@ref)
        end
    
          def to_asciidoc
        'image:#{image_url}[link=\'#{link_url}\',title=\'#{title}\']'
      end
    
            def template
          @template ||= Pipeline::Template.new(self)
        end
      end
    end
  end
end

    
        def check_confirmation
      if @user.confirmed?
        flash[:error] = I18n.t('admin.accounts.resend_confirmation.already_confirmed')
        redirect_to admin_accounts_path
      end
    end
  end
end

    
        def ordered_instances
      paginated_instances.map { |account| Instance.new(account) }
    end
    
      def parse(*paths)
    paths.flatten
         .compact
         .flat_map { |p| Pathname.new(p).to_path.split(File::PATH_SEPARATOR) }
         .uniq
  end
end

    
      class Mention < ApplicationRecord
  end
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
          get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_read')
    end
  end