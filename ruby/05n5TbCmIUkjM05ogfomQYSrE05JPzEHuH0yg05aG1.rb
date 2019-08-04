
        
            # Returns source file path.
    def path
      # Static file is from a collection inside custom collections directory
      if !@collection.nil? && !@site.config['collections_dir'].empty?
        File.join(*[@base, @site.config['collections_dir'], @dir, @name].compact)
      else
        File.join(*[@base, @dir, @name].compact)
      end
    end
    
          mutable false
    
            # config[kramdown][syntax_higlighter] >
        #   config[kramdown][enable_coderay] >
        #   config[highlighter]
        # Where `enable_coderay` is now deprecated because Kramdown
        # supports Rouge now too.
        def highlighter
          return @highlighter if @highlighter
    
          Jekyll.logger.info 'Total allocated: #{total_allocated_output} (#{report.total_allocated} objects)'.cyan
      Jekyll.logger.info 'Total retained:  #{total_retained_output} (#{report.total_retained} objects)'.cyan
    
    require 'benchmark/ips'
require 'pathutil'
    
    CONTENT_CONTAINING = <<-HTML.freeze
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
    
            def handle_websockets_event(websocket)
          websocket.onopen { |handshake| connect(websocket, handshake) }
          websocket.onclose { disconnect(websocket) }
          websocket.onmessage { |msg| print_message(msg) }
          websocket.onerror { |error| log_error(error) }
        end
    
    RSpec.describe UnreservedUsernameValidator, type: :validator do
  describe '#validate' do
    before do
      allow(validator).to receive(:reserved_username?) { reserved_username }
      validator.validate(account)
    end
    
        before do
      post :follow, params: { id: other_account.id }
    end
    
        @disallowed_hashtags = Setting.disallowed_hashtags.nil? ? [] : Setting.disallowed_hashtags
    @disallowed_hashtags = @disallowed_hashtags.split(' ') if @disallowed_hashtags.is_a? String
    @disallowed_hashtags = @disallowed_hashtags.map(&:downcase)
  end
end

    
      private
    
      describe 'email' do
    before do
      ActionMailer::Base.deliveries.clear
    
      private
    
        valid_emails, invalid_emails = emails.partition {|email| valid_email?(email) }
    
      def destroy
    if like_service.destroy(params[:id])
      head :no_content
    else
      render plain: I18n.t('likes.destroy.error'), status: 404
    end
  end
    
      respond_to :html, :mobile
  respond_to :json, :only => :show
    
        it 'should use the default URL if no template URL is given' do
      template_url = 'https://github.com/CocoaPods/pod-template.git'
      @sut.any_instance.expects(:git!).with(['clone', template_url, 'TestPod']).once
      run_command('lib', 'create', 'TestPod')
    end
  end
end

    
        def self.extended(base)
      # Make Context methods available
      # WORKAROUND: Bacon auto-inherits singleton methods to child contexts
      # by using the runtime and won't include methods in modules included
      # by the parent context. We have to ensure that the methods will be
      # accessible by the child contexts by defining them as singleton methods.
      TemporaryRepos.instance_methods.each do |method|
        unbound_method = base.method(method).unbind
        base.define_singleton_method method do |*args, &b|
          unbound_method.bind(self).call(*args, &b)
        end
      end
    
              def add_developer_files
            UI.message '- Adding development pod helper files' do
              file_accessors.each do |file_accessor|
                pod_name = file_accessor.spec.name
                next unless sandbox.local?(pod_name)
                root_name = Specification.root_name(pod_name)
                paths = file_accessor.developer_files
                next if paths.empty?
                group = pods_project.group_for_spec(root_name, :developer)
                paths.each do |path|
                  ref = pods_project.add_file_reference(path, group, false)
                  if path.extname == '.podspec'
                    pods_project.mark_ruby_file_ref(ref)
                  end
                end
              end
            end
          end