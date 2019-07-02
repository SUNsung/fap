
        
        def normalize_bullets(markdown)
  markdown.gsub(%r!\n\s{2}\*{1}!, '\n-')
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
          def grouped_array(groups)
        groups.each_with_object([]) do |item, array|
          array << {
            'name'  => item.first,
            'items' => item.last,
            'size'  => item.last.size,
          }
        end
      end
    end
  end
end

    
    module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
              redirect_to admin_reports_path, notice: I18n.t('admin.reports.resolved_msg')
          return
        end
    
      def hub_topic_uri
    @_hub_topic_uri ||= Addressable::URI.parse(hub_topic).normalize
  end
    
      private
    
    class Auth::OmniauthCallbacksController < Devise::OmniauthCallbacksController
  skip_before_action :verify_authenticity_token
    
      private
    
    module SessionTrackingConcern
  extend ActiveSupport::Concern
    
      UPDATE_SIGN_IN_HOURS = 24
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
        def role(name, hosts, options={})
      if name == :all
        raise ArgumentError, '#{name} reserved name for role. Please choose another name'
      end
    
            @response = (gets || '').chomp
      end
    
          def warn_add_git_to_capfile
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] Future versions of Capistrano will not load the Git SCM
plugin by default. To silence this deprecation warning, add the following to
your Capfile after `require 'capistrano/deploy'`:
    
            if unmasked_token?(token)
          compare_with_real_token token, session
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end
