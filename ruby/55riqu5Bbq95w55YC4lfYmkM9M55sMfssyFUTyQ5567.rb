
        
            def terminate_thread!
      if thread
        thread.instance_eval { ActiveRecord::Base.connection_pool.release_connection }
        thread.wakeup if thread.status == 'sleep'
        thread.terminate
      end
    end
    
      def tumblr_oauth_token_secret
    service.secret
  end
    
          # Skips sending the confirmation/reconfirmation notification email after_create/after_update. Unlike
      # #skip_confirmation!, record still requires confirmation.
      def skip_confirmation_notification!
        @skip_confirmation_notification = true
      end
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
      validate :enough_poll_answers
  validates :question, presence: true
    
      def options
    git_data = get_git_info
    @options ||= {
      :plugin_name => name,
      :author => git_data.author,
      :email  => git_data.email,
      :min_version => '2.0',
    }
  end
    
      def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
      def eval_file(entry, files, prefix)
    return false if entry.full_name =~ /PaxHeaders/
    if !files.nil?
      if files.is_a?(Array)
        return false unless files.include?(entry.full_name.gsub(prefix, ''))
        entry.full_name.split('/').last
      elsif files.is_a?(String)
        return false unless entry.full_name =~ Regexp.new(files)
        entry.full_name.split('/').last
      end
    else
      entry.full_name.gsub(prefix, '')
    end
  end
    
        # True if the dimensions represent a horizontal rectangle
    def horizontal?
      height < width
    end
    
            protected
    
            def expected_attachment
          'Expected #{@attachment_name}:\n'
        end
    
            required = directories.map do |directory|
          pathname = File.expand_path(Rails.root.join(directory, filename))
          file_exists = File.exist?(pathname)
          require pathname if file_exists
          file_exists
        end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end
    
          def create_validating_before_filter(attribute, validator_class, options)
        if_clause = options.delete(:if)
        unless_clause = options.delete(:unless)
        send(:'before_#{attribute}_post_process', :if => if_clause, :unless => unless_clause) do |*args|
          validator_class.new(options.dup).validate(self)
        end
      end