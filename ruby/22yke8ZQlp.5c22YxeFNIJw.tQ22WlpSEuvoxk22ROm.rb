
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
      # If a given extension is listed multiple times, prefer the first one listed
  extensions.reject! { |extension| mimes.values.flatten.include?(extension) }
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          self.data = {}
    
      test 'should require all confirmation_keys' do
    swap Devise, confirmation_keys: [:username, :email] do
      user = create_user
      confirm_user = User.send_confirmation_instructions(email: user.email)
      refute confirm_user.persisted?
      assert_equal 'can't be blank', confirm_user.errors[:username].join
    end
  end
    
      # DELETE /resource/sign_out
  def destroy
    signed_out = (Devise.sign_out_all_scopes ? sign_out : sign_out(resource_name))
    set_flash_message! :notice, :signed_out if signed_out
    yield if block_given?
    respond_to_on_destroy
  end
    
            ActiveSupport.on_load(:action_controller) do
          if respond_to?(:helper_method)
            helper_method 'current_#{mapping}', '#{mapping}_signed_in?', '#{mapping}_session'
          end
        end
      end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
          private
    
          def assert_valid_stage_names(names)
        invalid = names.find { |n| RESERVED_NAMES.include?(n) }
        return if invalid.nil?
    
        def deploying?
      fetch(:deploying, false)
    end
  end
end

    
      # Implemented by subclasses to define Rake tasks. Typically a plugin will call
  # `eval_rakefile` to load Rake tasks from a separate .rake file.
  #
  # Example:
  #
  #   def define_tasks
  #     eval_rakefile File.expand_path('../tasks.rake', __FILE__)
  #   end
  #
  # For simple tasks, you can define them inline. No need for a separate file.
  #
  #   def define_tasks
  #     desc 'Do something fantastic.'
  #     task 'my_plugin:fantastic' do
  #       ...
  #     end
  #   end
  #
  def define_tasks; end
    
        begin
      create_scaffold(source, @target_path)
    rescue Errno::EACCES => exception
      report_exception('Permission denied when executing the plugin manager', exception)
    rescue => exception
      report_exception('Plugin creation Aborted', exception)
    end
  end
    
          content_type 'application/json'
      LogStash::Json.dump(data, {:pretty => pretty?})
    else
      content_type 'text/plain'
      data.to_s
    end
  end
    
      def _nt_rvalue
    start_index = index
    if node_cache[:rvalue].has_key?(index)
      cached = node_cache[:rvalue][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end