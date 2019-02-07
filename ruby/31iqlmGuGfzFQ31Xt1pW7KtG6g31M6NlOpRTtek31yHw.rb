
        
          describe 'width' do
    it 'specifies the minimum number of characters that will be written to the result' do
      format('%10b', 10).should == '      1010'
      format('%10B', 10).should == '      1010'
      format('%10d', 112).should == '       112'
      format('%10i', 112).should == '       112'
      format('%10o', 87).should == '       127'
      format('%10u', 112).should == '       112'
      format('%10x', 196).should == '        c4'
      format('%10X', 196).should == '        C4'
    
      it 'accepts a Fixnum' do
    sleep(0).should be_close(0, 2)
  end
    
      it 'raises an ArgumentError if there is no catch block for the symbol' do
    lambda { throw :blah }.should raise_error(ArgumentError)
  end
    
      it 'is a private method' do
    Kernel.should have_private_instance_method(:trace_var)
  end
    
      after :each do
    Object.send :remove_method, :boom
  end
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
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

    
      def prefixes
    prefixes = ['/bin', '/usr/bin', '/usr/libexec', xcode_app_path]
    prefixes << `brew --prefix`.strip unless `which brew`.strip.empty?
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
        context 'by iso3' do
      before do
        get '/api/v2/storefront/countries/#{country.iso3}'
      end
    
    # Requires supporting ruby files with custom matchers and macros, etc,
# in spec/support/ and its subdirectories.
Dir[File.dirname(__FILE__) + '/support/**/*.rb'].each { |f| require f }
    
          potential_rates_for_zone(order_tax_zone)
    end
    
          def invalid_api_key
        render 'spree/api/errors/invalid_api_key', status: 401
      end
    
                if handler.error.present?
              @coupon_message = handler.error
              respond_with(@order, default_template: 'spree/api/v1/orders/could_not_apply_coupon', status: 422)
              return true
            end
          end
          false
        end
    
        puts 'successfully created #{output}'
  end
ensure
  # defer cleanup until the end
  output_packages.each {|p| p.cleanup}
end

    
        # write depends lines
    for dependency in dependencies()
      pkginfo << 'depend = #{dependency}\n'
    end
    
        self.architecture = control['arch'][0]
    
      # Helper for user lookup
  def uid2user(uid)
    begin
      pwent = Etc.getpwuid(uid)
      return pwent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find username for uid #{uid}')
      return uid.to_s
    end
  end # def uid2user
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split
    
      # Output a zipfile.
  def output(output_path)
    output_check(output_path)
    realpath = Pathname.new(output_path).realdirpath.to_s
    ::Dir.chdir(staging_path) do
      safesystem('zip', '-9r', realpath, '.')
    end
  end # def output
end # class FPM::Package::Tar
