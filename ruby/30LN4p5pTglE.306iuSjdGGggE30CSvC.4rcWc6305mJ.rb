
        
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
    
    puts 'Stackprof Mode: #{MODE}'
    
    config = File.expand_path '../lib/jekyll/mime.types', __dir__
    
        # --
    # NOTE: Pathutil#in_path? gets the realpath.
    # @param [<Anything>] entry the entry you want to validate.
    # Check if a path is outside of our given root.
    # --
    def symlink_outside_site_source?(entry)
      !Pathutil.new(entry).in_path?(
        site.in_source_dir
      )
    end
    
        # Gets/Sets the Hash that holds the metadata for this layout.
    attr_accessor :data
    
      private
    
      # Send deprecation notices to registered listeners.
  config.active_support.deprecation = :notify
    
      # Do not eager load code on boot. This avoids loading your whole application
  # just for the purpose of running a single test. If you are using a tool that
  # preloads Rails for running tests, you may have to set it to true.
  config.eager_load = false
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
      describe '::binary_osxfuse_installed?' do
    it 'returns false if fuse.h does not exist' do
      allow(File).to receive(:exist?).and_return(false)
      expect(described_class).not_to be_binary_osxfuse_installed
    end
    
          unless leaf.respond_to?(:empty?) && !leaf.empty?
        raise CaskError, 'Cannot create metadata subdir for empty leaf.'
      end
    
          def to_s
        @pairs.inspect
      end
    end
  end
end
