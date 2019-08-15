
        
            def add(entry)
      if entry.is_a? Array
        entry.each(&method(:add))
      else
        add_entry(entry) unless entry.root?
      end
    end
    
        def type=(value)
      @type = value.try :strip
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
            css('.content', 'article', '.api-header', 'section', '.instance-member').each do |node|
          node.before(node.children).remove
        end
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
        login_as User.create!(email: 'test@test.com', password: 'test123456', password_confirmation: 'test123456')
    
            users.any?
      end
    
        # Return modules for the mapping.
    def modules
      @modules ||= to.respond_to?(:devise_modules) ? to.devise_modules : []
    end
    
          klass.devise_modules.each do |mod|
        constant = const_get(mod.to_s.classify)
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
        def validate_plugins!
      @plugins_to_package.each do |plugin_name|
        if INVALID_PLUGINS_TO_EXPLICIT_PACK.any? { |invalid_name| plugin_name =~ invalid_name }
          raise UnpackablePluginError, 'Cannot explicitly pack `#{plugin_name}` for offline installation'
        end
      end
    end
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end

    
        def user_feedback_string_for(action, platform, machines, options={})
      experimental_string = options['experimental'] ? 'experimental' : 'non experimental'
      message  = '#{action} all #{experimental_string} VM's defined in acceptance/Vagrantfile'
      '#{message} for #{platform}: #{machines}' if !platform.nil?
    end
    
        it 'allows local middleware modification' do
      $called = false
      mware = Class.new { def call(worker_klass,msg,q,r); $called = true; msg;end }
      client = Sidekiq::Client.new
      client.middleware do |chain|
        chain.add mware
      end
      client.push('class' => 'Blah', 'args' => [1,2,3])
    
          assert_equal init_size, mgr.workers.size
      refute mgr.workers.include?(processor)
    ensure
      mgr.workers.each {|p| p.terminate(true) }
    end
  end
    
      it 'allows middleware to abruptly stop processing rest of chain' do
    recorder = []
    chain = Sidekiq::Middleware::Chain.new
    chain.add NonYieldingMiddleware
    chain.add CustomMiddleware, 1, recorder
    
    desc 'Move sass to sass.old, install sass theme updates, replace sass/custom with sass.old/custom'
task :update_style, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('sass.old')
    puts 'removed existing sass.old directory'
    rm_r 'sass.old', :secure=>true
  end
  mv 'sass', 'sass.old'
  puts '## Moved styles into sass.old/'
  cp_r '#{themes_dir}/'+theme+'/sass/', 'sass', :remove_destination=>true
  cp_r 'sass.old/custom/.', 'sass/custom/', :remove_destination=>true
  puts '## Updated Sass ##'
end
    
    run SinatraStaticServer

    
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
    
    Given /^I run a paperclip generator to add a paperclip '([^']*)' to the '([^']*)' model$/ do |attachment_name, model_name|
  step %[I successfully run `rails generate paperclip #{model_name} #{attachment_name}`]
end
    
      def migration_version
    if Rails.version.start_with? '5'
      '[#{Rails::VERSION::MAJOR}.#{Rails::VERSION::MINOR}]'
    end
  end
end

    
        def type_from_file_contents
      type_from_mime_magic || type_from_file_command
    rescue Errno::ENOENT => e
      Paperclip.log('Error while determining content type: #{e}')
      SENSIBLE_DEFAULT
    end
    
        # scale to the requested geometry and preserve the aspect ratio
    def scale_to(new_geometry)
      scale = [new_geometry.width.to_f / self.width.to_f , new_geometry.height.to_f / self.height.to_f].min
      Paperclip::Geometry.new((self.width * scale).round, (self.height * scale).round)
    end
  end
end
