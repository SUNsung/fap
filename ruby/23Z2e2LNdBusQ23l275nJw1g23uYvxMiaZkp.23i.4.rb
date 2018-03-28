
        
          # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
      private
    
      private
    
            # Checks whether the record requires any confirmation.
        def pending_any_confirmation
          if (!confirmed? || pending_reconfirmation?)
            yield
          else
            self.errors.add(:email, :already_confirmed)
            false
          end
        end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
    # TODO:
# group :mongoid do
#   gem 'mongoid', '~> 4.0.0'
# end

    
        def respond
      if http_auth?
        http_auth
      elsif warden_options[:recall]
        recall
      else
        redirect
      end
    end
    
        def initialize
      @entries = []
      @index = Set.new
      @types = Hash.new { |hash, key| hash[key] = Type.new key }
    end
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
              css('##{dom_id}-methods ~ h4 code').each do |node|
            next unless name = node.content[/\('(\w+)'\)/, 1]
            id = node.parent['id'] = '#{dom_id}-#{name.parameterize}-method'
            name.prepend '#{dom_id.singularize.titleize}: '
            name << ' (method)'
            entries << [name, id]
          end
        end
    
            css('.method-detail').each do |node|
          node.at_css('.method-name')['id'] = node.at_css('a')['id']
        end