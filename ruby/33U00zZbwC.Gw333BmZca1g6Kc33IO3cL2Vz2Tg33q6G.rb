
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
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
    
    require 'erb'
    
        def add(entry)
      if entry.is_a? Array
        entry.each(&method(:add))
      else
        add_entry(entry) unless entry.root?
      end
    end
    
        delegate :empty?, :blank?, to: :pages
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
        def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
            css('a.is-button > h3').each do |node|
          node.parent.content = node.content
        end
    
            css('code').each do |node|
          node.inner_html = node.inner_html.squish
        end
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        context 'with valid parameters' do
      it 'creates a user' do
        expect {
          get :create, params: valid_params
        }.to change(User, :count).by(1)
      end
    
    Then(/^the repo is cloned$/) do
  run_vagrant_command(test_dir_exists(TestApp.repo_path))
end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
        def role_properties_for(names, &block)
      servers.role_properties_for(names, &block)
    end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
            value_to_evaluate = block || value