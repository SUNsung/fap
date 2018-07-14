
        
              raise Discourse::InvalidParameters.new(:to_address) unless args[:to_address].present?
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        version do
      self.links = {
        home: 'https://haxe.org',
        code: 'https://github.com/HaxeFoundation/haxe'
      }
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
        def add(path, content)
      @pages[path] = content
    end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
        def find_remote!(username, domain)
      find_remote(username, domain) || raise(ActiveRecord::RecordNotFound)
    end
    
      def preview_url
    if object.needs_redownload?
      media_proxy_url(object.id, :small)
    else
      full_asset_url(object.file.url(:small))
    end
  end
    
        File.write(dest, Oj.dump(map))
    puts 'Wrote emojo to destination! (#{dest})'
  end
end

    
      attr_reader :user
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/follow_request
  def follow_request
    f = Follow.last
    NotificationMailer.follow_request(f.target_account, Notification.find_by(activity: f))
  end
    
          less.gsub /&:extend\((#{SELECTOR_RE})(?: all)?\)/ do
        selector = $1
        selector =~ /\.([\w-]+)/
        mixin    = $1
        if mixin && mixin_names.include?(mixin)
          '@include #{mixin}'
        else
          '@extend #{selector}'
        end
      end
    end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
        def post_render(page)
      OctopressFilters::post_filter(page)
    end
  end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
    class LogStash::PluginManager::Generate < LogStash::PluginManager::Command
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
          origin = caller[1]
      if origin =~ /rubygems\/custom_require/
        origin = caller[3]
        if origin.nil?
          STDERR.puts 'Unknown origin'
          STDERR.puts caller.join('\n')
        end
      end
      origin = origin.gsub(/:[0-9]+:in .*/, '') if origin
    
      def file_sha1(path)
    digest = Digest::SHA1.new
    fd = File.new(path, 'r')
    while true
      begin
        digest << fd.sysread(16384)
      rescue EOFError
        break
      end
    end
    return digest.hexdigest
  ensure
    fd.close if fd
  end