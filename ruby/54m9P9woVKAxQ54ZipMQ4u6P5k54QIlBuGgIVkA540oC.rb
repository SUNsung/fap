
        
              it 'it increments all targets minor version major' do
        Fastlane::FastFile.new.parse('lane :test do
          increment_version_number(bump_type: 'major')
        end').runner.execute(:test)
    
      def resource
    @resource ||=
      if params[:project_id].present?
        Project.find(params[:project_id])
      elsif params[:namespace_id].present?
        Group.find(params[:namespace_id])
      end
  end
    
      protected
    
        # Check if a reset_password_token is provided in the request
    def assert_reset_token_passed
      if params[:reset_password_token].blank?
        set_flash_message(:alert, :no_token)
        redirect_to new_session_path(resource_name)
      end
    end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
        def ==(other)
      other.name == name && other.path == path && other.type == type
    end
    
              if %w(Events Sync).include?(type)
            name.prepend 'Backbone.'
          elsif type == 'History'
            name.prepend 'Backbone.history.'
          elsif name == 'extend'
            name.prepend '#{type}.'
          elsif name.start_with? 'constructor'
            name = type
          elsif type != 'Utility'
            name.prepend '#{type.downcase}.'
          end
    
                sequence_base := (
              'x' ||
              -- Take the first two bytes (four hex characters)
              substr(
                -- Of the MD5 hash of the data we documented
                md5(table_name ||
                  '#{SecureRandom.hex(16)}' ||
                  time_part::text
                ),
                1, 4
              )
            -- And turn it into a bigint
            )::bit(16)::bigint;
    
      def show
    @tag = Tag.find_by!(name: params[:id].downcase)
    
      describe 'GET #show' do
    let!(:tag)     { Fabricate(:tag, name: 'test') }
    let!(:local)   { Fabricate(:status, tags: [tag], text: 'local #test') }
    let!(:remote)  { Fabricate(:status, tags: [tag], text: 'remote #test', account: Fabricate(:account, domain: 'remote')) }
    let!(:late)    { Fabricate(:status, tags: [tag], text: 'late #test') }
    
          expect('.border-style-alternate').to have_rule(rule)
    end
  end
    
          expect('.padding-implied-left').to have_rule(rule)
    end
  end
    
          expect('.prefix--webkit').to have_ruleset(rule)
    end
  end
    
          expect('.size-auto').to have_ruleset(rule)
    end
  end
end
