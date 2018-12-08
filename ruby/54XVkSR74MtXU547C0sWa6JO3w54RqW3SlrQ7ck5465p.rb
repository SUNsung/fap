
        
              puts 'Moving #{old_path} to #{new_path}...' if $stdout.tty?
      path.dirname.mkpath
      FileUtils.mv old_path, new_path
    end
  end
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def setup_filters
      @filters = cmdline_filters
      @filters += @custom_filters if @custom_filters
      @filters << Filter.new(:role, ENV['ROLES']) if ENV['ROLES']
      @filters << Filter.new(:host, ENV['HOSTS']) if ENV['HOSTS']
      fh = fetch_for(:filter, {}) || {}
      @filters << Filter.new(:host, fh[:hosts]) if fh[:hosts]
      @filters << Filter.new(:role, fh[:roles]) if fh[:roles]
      @filters << Filter.new(:host, fh[:host]) if fh[:host]
      @filters << Filter.new(:role, fh[:role]) if fh[:role]
    end
    
            # Skip validation behavior if no validators are registered for this key
        return super unless validators.key?(key)
    
    Given 'I allow the attachment to be submitted' do
  cd('.') do
    transform_file('app/controllers/users_controller.rb') do |content|
      content.gsub('params.require(:user).permit(:name)',
                   'params.require(:user).permit!')
    end
  end
end
    
    When /^(?:|I )press '([^']*)'$/ do |button|
  click_button(button)
end
    
      def migration_version
    if Rails.version.start_with? '5'
      '[#{Rails::VERSION::MAJOR}.#{Rails::VERSION::MINOR}]'
    end
  end
end

    
    # This stuff needs to be run after Paperclip is defined.
require 'paperclip/io_adapters/registry'
require 'paperclip/io_adapters/abstract_adapter'
require 'paperclip/io_adapters/empty_string_adapter'
require 'paperclip/io_adapters/identity_adapter'
require 'paperclip/io_adapters/file_adapter'
require 'paperclip/io_adapters/stringio_adapter'
require 'paperclip/io_adapters/data_uri_adapter'
require 'paperclip/io_adapters/nil_adapter'
require 'paperclip/io_adapters/attachment_adapter'
require 'paperclip/io_adapters/uploaded_file_adapter'
require 'paperclip/io_adapters/uri_adapter'
require 'paperclip/io_adapters/http_url_proxy_adapter'

    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
        # Returns an integer timestamp that is time zone-neutral, so that paths
    # remain valid even if a server's time zone changes.
    def updated_at attachment, style_name
      attachment.updated_at
    end