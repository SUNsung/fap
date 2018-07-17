
        
                expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end
    
        def valid_type?(type)
      const_get(:TYPES).include?(type)
    end
    
      def tumblr_oauth_token_secret
    service.secret
  end
    
      def index
    if params[:agent_id]
      @agent = current_user.agents.find(params[:agent_id])
      @events = @agent.events.page(params[:page])
    else
      @events = current_user.events.preload(:agent).page(params[:page])
    end
    
          included do
        before_create :generate_confirmation_token, if: :confirmation_required?
        after_create :skip_reconfirmation_in_callback!, if: :send_confirmation_notification?
        if defined?(ActiveRecord) && self < ActiveRecord::Base # ActiveRecord
          after_commit :send_on_create_confirmation_instructions, on: :create, if: :send_confirmation_notification?
          after_commit :send_reconfirmation_instructions, on: :update, if: :reconfirmation_required?
        else # Mongoid
          after_create :send_on_create_confirmation_instructions, if: :send_confirmation_notification?
          after_update :send_reconfirmation_instructions, if: :reconfirmation_required?
        end
        before_update :postpone_email_change_until_confirmation_and_regenerate_confirmation_token, if: :postpone_email_change?
      end
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
          def actual_path
        $PROGRAM_NAME
      end
    end
  end
end

    
            self.description = <<-DESC
          Creates a scaffold for the development of a new Pod named `NAME`
          according to the CocoaPods best practices.
          If a `TEMPLATE_URL`, pointing to a git repo containing a compatible
          template, is specified, it will be used in place of the default one.
        DESC