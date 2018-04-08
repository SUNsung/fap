      it 'splits correctly' do
        expected = [
          'One',
          'Two',
          'Three',
          'Four Token',
          'Or',
          'Newlines',
          'Everywhere'
        ]
        expect(generator.split_keywords(keywords)).to eq(expected)
      end
    end
  end
end

    
    puts '\nDone.'

    
      class_methods do
    def find_local!(username)
      find_local(username) || raise(ActiveRecord::RecordNotFound)
    end
    
      class Callbacks
    def self.around_create(record)
      now = Time.now.utc
    
    RSpec.describe TagsController, type: :controller do
  render_views
    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.settings['boost_modal']).to be true
      expect(user.settings['delete_modal']).to be false
    end
  end
end

    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
          it 'should remain unchanged as ASCII-8BIT' do
        body = @app.call({ 'PATH_INFO' => '/'.encode('ASCII-8BIT') })[2][0]
        expect(body).to eq('ASCII-8BIT')
      end
    end
  end
end

    
      config.include Rack::Test::Methods
  config.include SpecHelpers
end
    
        def self.names_for(klass)
      instance.names_for(klass)
    end