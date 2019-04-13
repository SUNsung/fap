
        
                a_length = a_split.length
        b_length = b_split.length
    
        def relative_url_string?(str)
      str !~ SCHEME_RGX && !fragment_url_string?(str) && !data_url_string?(str)
    end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        def initialize
      @pages = {}
    end
    
        def with_filters(*filters)
      stack = FilterStack.new
      stack.push(*filters)
      pipeline.instance_variable_set :@filters, stack.to_a.freeze
      yield
    ensure
      @pipeline = nil
    end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
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
    
          def timeout_in
        self.class.timeout_in
      end
    
          # Read each line as a path
      File.new(inputs, 'r').each_line do |line|
        # Handle each line as if it were an argument
        input.input(line.strip)
      end
    end
    
        # Create the .txz package archive from the files in staging_path.
    File.open(output_path, 'wb') do |file|
      XZ::StreamWriter.new(file) do |xz|
        FPM::Util::TarWriter.new(xz) do |tar|
          # The manifests must come first for pkg.
          add_path(tar, '+COMPACT_MANIFEST',
                   File.join(staging_path, '+COMPACT_MANIFEST'))
          add_path(tar, '+MANIFEST',
                   File.join(staging_path, '+MANIFEST'))
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
      public(:input)
end # class FPM::Package::PleaseRun

    
        output = ::Dir.chdir(setup_dir) do
      tmp = build_path('metadata.json')
      setup_cmd = 'env PYTHONPATH=#{pylib} #{attributes[:python_bin]} ' \
        'setup.py --command-packages=pyfpm get_metadata --output=#{tmp}'
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end
    
    
    
        desc 'Package #{@name}' unless ::Rake.application.last_description