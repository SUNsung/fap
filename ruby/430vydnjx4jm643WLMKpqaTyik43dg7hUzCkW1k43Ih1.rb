
        
              if cask_version.empty?
        raise CaskError, 'Cannot create metadata path with empty version.'
      end
    
          private
    
      entries = [{ template: deploy_rb, file: config_dir.join('deploy.rb') }]
  entries += envs.split(',').map { |stage| { template: stage_rb, file: deploy_dir.join('#{stage}.rb') } }
    
      describe 'role_properties()' do
    before do
      dsl.role :redis, %w[example1.com example2.com], redis: { port: 6379, type: :slave }
      dsl.server 'example1.com', roles: %w{web}, active: true, web: { port: 80 }
      dsl.server 'example2.com', roles: %w{web redis}, web: { port: 81 }, redis: { type: :master }
      dsl.server 'example3.com', roles: %w{app}, primary: true
    end
    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} cannot be between #{@low} and #{@high} bytes'
        end
        alias negative_failure_message failure_message_when_negated
    
    
    {  # Returns hash with styles missing from recent run of rake paperclip:refresh:missing_styles
  #   {
  #     :User => {:avatar => [:big]},
  #     :Book => {
  #       :cover => [:croppable]},
  #     }
  #   }
  def self.missing_attachments_styles
    current_styles = current_attachments_styles
    registered_styles = get_registered_attachments_styles