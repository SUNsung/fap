
        
              if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
    module Admin
  class ReportNotesController < BaseController
    before_action :set_report_note, only: [:destroy]
    
      def after_sign_in_path_for(resource)
    if resource.email_verified?
      root_path
    else
      finish_signup_path
    end
  end
end

    
      included do
    before_action :set_session_activity
  end
    
          def title
        'Create a new page'
      end
    
        end
  end
end

    
    module Gollum
end
Gollum::GIT_ADAPTER = ENV['GIT_ADAPTER'] if ENV['GIT_ADAPTER']
    
      test 'create sets the correct path for a relative path subdirectory with the page file directory set' do
    Precious::App.set(:wiki_options, { :page_file_dir => 'foo' })
    dir  = 'bardir'
    name = '#{dir}/baz'
    get '/create/foo/#{name}'
    assert_match(/\/#{dir}/, last_response.body)
    assert_no_match(/[^\/]#{dir}/, last_response.body)
    # reset page_file_dir
    Precious::App.set(:wiki_options, { :page_file_dir => nil })
  end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
    def version
  line = File.read('lib/#{name}.rb')[/^\s*VERSION\s*=\s*.*/]
  line.match(/.*VERSION\s*=\s*[''](.*)['']/)[1]
end
    
    exec         = {}
options      = {
  :port => 4567,
  :bind => '0.0.0.0',
}
wiki_options = {
  :live_preview  => false,
  :allow_uploads => false,
  :allow_editing => true,
}
    
        # Ensure path begins with a single leading slash
    def clean_path(path)
      if path
        (path[0] != '/' ? path.insert(0, '/') : path).gsub(/\/{2,}/, '/')
      end
    end
    
      puts '\n== Restarting application server =='
  system! 'bin/rails restart'
end

    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true