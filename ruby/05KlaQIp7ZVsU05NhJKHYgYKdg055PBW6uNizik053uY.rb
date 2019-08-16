
        
          # ==> ORM configuration
  # Load and configure the ORM. Supports :active_record (default) and
  # :mongoid (bson_ext recommended) by default. Other ORMs may be
  # available as additional gems.
  require 'devise/orm/<%= options[:orm] %>'
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
        def translation_scope
      'devise.unlocks'
    end
end

    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
      before_action :authenticate_user!
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
      def test_change_class_name
    eval('class C3; def _dump(s); 'foo'; end; end')
    m = Marshal.dump(C3.new)
    assert_raise(TypeError) { Marshal.load(m) }
    eval('C3 = nil')
    assert_raise(TypeError) { Marshal.load(m) }
  end
    
      def self.scroll_down(val)
    return if val.zero?
    scroll_rectangle = [0, val, get_screen_size.first, get_screen_size.last].pack('s4')
    destination_origin = 0 # y * 65536 + x
    fill = [' '.ord, 0].pack('SS')
    @@ScrollConsoleScreenBuffer.call(@@hConsoleHandle, scroll_rectangle, nil, destination_origin, fill)
  end
    
        ScratchPad.record []
    gz.each_byte { |b| ScratchPad << b }
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
      before :each do
    @data = 'firstline\nsecondline\n\nforthline'
    @zip = [31, 139, 8, 0, 244, 125, 128, 88, 2, 255, 75, 203, 44, 42, 46, 201,
            201, 204, 75, 229, 42, 78, 77, 206, 207, 75, 1, 51, 185, 210,242,
            139, 74, 50, 64, 76, 0, 180, 54, 61, 111, 31, 0, 0, 0].pack('C*')
    
        assert_equal obj.attribute, Psych.load(Psych.dump(obj)).attribute
  end
end

    
        it 'allows angry developers to express their emotional constitution and remedies it' do
      Sidekiq.❨╯°□°❩╯︵┻━┻
      assert_equal 'Calm down, yo.\n', $stdout.string
    end
  end
    
      class DirectWorker
    include Sidekiq::Worker
    def perform(a, b)
      a + b
    end
  end
    
    class TimedWorker
  include Sidekiq::Worker
    
    post '/msg' do
  SinatraWorker.perform_async params[:msg]
  redirect to('/')
end
    
    class SinatraStaticServer < Sinatra::Base
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
    end

    
      private
    
      include WithinOrganization
    
      def create
    login(User.authenticate(params[:email_address], params[:password]))
    flash[:remember_login] = true
    redirect_to_with_return_to root_path
  rescue Postal::Errors::AuthenticationError => e
    flash.now[:alert] = 'The credentials you've provided are incorrect. Please check and try again.'
    render 'new'
  end
    
      def safe_params
    params.require(:smtp_endpoint).permit(:name, :hostname, :port, :ssl_mode)
  end