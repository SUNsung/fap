
        
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
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
            def handle_websockets_event(websocket)
          websocket.onopen { |handshake| connect(websocket, handshake) }
          websocket.onclose { disconnect(websocket) }
          websocket.onmessage { |msg| print_message(msg) }
          websocket.onerror { |error| log_error(error) }
        end
    
          private
    
          it 'should not be catched when it is unexpected' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        allow(alice).to receive(:like!).and_raise('something')
        allow(@controller).to receive(:current_user).and_return(alice)
        expect { post :create, params: like_hash, format: :json }.to raise_error('something')
      end
    end
  end
    
        context 'on my own post' do
      before do
        aspect_to_post = alice.aspects.where(:name => 'generic').first
        @post = alice.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
      describe '#index' do
    context 'with a private post' do
      before do
        @alices_aspect = alice.aspects.where(name: 'generic').first
        @post = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
      end
    
    Then(/^the current symlink points to that specific release$/) do
  specific_release_path = TestApp.releases_path.join(@rollback_release)
    
          def roles_for(names)
        options = extract_options(names)
        s = Filter.new(:role, names).filter(servers_by_key.values)
        s.select { |server| server.select?(options) }
      end