
        
            projects << @user.contributed_projects.visible_to_user(current_user) if current_user
    projects << @user.contributed_projects.public_to_user(current_user)
    
        def register_compass_extension
      ::Compass::Frameworks.register(
          'bootstrap',
          :version               => Bootstrap::VERSION,
          :path                  => gem_path,
          :stylesheets_directory => stylesheets_path,
          :templates_directory   => File.join(gem_path, 'templates')
      )
    end
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
      describe 'environment' do
    it 'adds the fuse directories to the appropriate paths' do
      expect(ENV).to receive(:append_path).with('PKG_CONFIG_PATH', any_args)
      expect(ENV).to receive(:append_path).with('HOMEBREW_LIBRARY_PATHS', any_args)
      expect(ENV).to receive(:append_path).with('HOMEBREW_INCLUDE_PATHS', any_args)
      subject.modify_build_environment
    end
  end
end