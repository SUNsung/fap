
        
              def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :platforms,
                                       optional: false,
                                       type: Array,
                                       default_value: '',
                                       description: 'The optional extra platforms to support')
        ]
      end
    
          def self.details
        list = <<-LIST.markdown_list
          `grouping` is just to keep your tags organised under one 'folder', defaults to 'builds'
          `lane` is the name of the current fastlane lane
          `prefix` is anything you want to stick in front of the version number, e.g. 'v'
          `postfix` is anything you want to stick at the end of the version number, e.g. '-RC1'
          `build_number` is the build number, which defaults to the value emitted by the `increment_build_number` action
        LIST
    
        class AppetizeViewingUrlGeneratorAction < Action
      def self.run(params)
        link = '#{params[:base_url]}/#{params[:public_key]}'
    
            require 'artifactory'
        file_path = File.absolute_path(params[:file])
        if File.exist?(file_path)
          client = connect_to_artifactory(params)
          artifact = Artifactory::Resource::Artifact.new
          artifact.client = client
          artifact.local_path = file_path
          artifact.checksums = {
              'sha1' => Digest::SHA1.file(file_path),
              'md5' => Digest::MD5.file(file_path)
          }
          UI.message('Uploading file: #{artifact.local_path} ...')
          upload = artifact.upload(params[:repo], params[:repo_path], params[:properties])
    
      platform_is_not :windows do
    it 'returns true when passed ?l if the argument is a symlink' do
      link = tmp('file_symlink.lnk')
      File.symlink(@file, link)
      begin
        Kernel.test(?l, link).should be_true
      ensure
        rm_r link
      end
    end
  end
    
      it 'sets the return value of the catch block to nil by default' do
    res = catch :blah do
      throw :blah
    end
    res.should == nil
  end
    
    # The module that contains everything Sass-related:
#
# * {Sass::Engine} is the class used to render Sass/SCSS within Ruby code.
# * {Sass::Plugin} is interfaces with web frameworks (Rails and Merb in particular).
# * {Sass::SyntaxError} is raised when Sass encounters an error.
# * {Sass::CSS} handles conversion of CSS to Sass.
#
# Also see the {file:SASS_REFERENCE.md full Sass reference}.
module Sass
  class << self
    # @private
    attr_accessor :tests_running
  end
    
          def inherited_hash_reader(name)
        class_eval <<-RUBY, __FILE__, __LINE__ + 1
          def #{name}(name)
            _#{name}(name.tr('_', '-'))
          end
    
          if !@options[:update] && !@options[:watch] &&
          @args.first && colon_path?(@args.first)
        if @args.size == 1
          @args = split_colon_path(@args.first)
        else
          @fake_update = true
          @options[:update] = true
        end
      end
      load_compass if @options[:compass]
      return interactive if @options[:interactive]
      return watch_or_update if @options[:watch] || @options[:update]
      super
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end
