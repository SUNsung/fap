
        
           def xx(*x)
     x.size
   end
end
    
        p0 = Vec.new(isect.pl.x + eps * isect.n.x,
                isect.pl.y + eps * isect.n.y,
                isect.pl.z + eps * isect.n.z)
    nphi.times do |j|
      ntheta.times do |i|
        r = rand
        phi = 2.0 * 3.14159265 * rand
        x = Math.cos(phi) * Math.sqrt(1.0 - r)
        y = Math.sin(phi) * Math.sqrt(1.0 - r)
        z = Math.sqrt(r)
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
      # log-levels from the diaspora.yml for SQL and federation debug-logging
  Logging.logger[ActionView::Base].level = Rails.env.development? ? :debug : :warn
  Logging.logger[ActiveRecord::Base].level = AppConfig.environment.logging.debug.sql? ? :debug : :info
  Logging.logger[DiasporaFederation::Salmon::MagicEnvelope].level =
    AppConfig.environment.logging.debug.federation? ? :debug : :info
    
        reversible(&method(:up_down))
  end
    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
      let(:valid_params) {
    {
      user: {
        username:              'jdoe',
        email:                 'jdoe@example.com',
        password:              'password',
        password_confirmation: 'password'
      }
    }
  }
    
        pod 'ObjCPod', path: 'ObjCPod'
    pod 'SwiftPod', path: 'SwiftPod'
    pod 'MixedPod', path: 'MixedPod'
    pod 'CustomModuleMapPod', path: 'CustomModuleMapPod'
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
            close_body(body) if reaction
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
    # Add our files (should be in the current directory):
package.input('my-executable=/usr/bin/')
package.input('my-library.so=/usr/lib/')
    
        # control tar.
    begin
      write_pkginfo(control_path)
      write_control_scripts(control_path)
      tar_path(control_path, controltar_path)
    ensure
      FileUtils.rm_r(control_path)
    end
    
        self.attributes[:pacman_optional_depends] = control['optdepend'] || []
    # There are other available attributes, but I didn't include them because:
    # - makedepend: deps needed to make the arch package. But it's already
    #   made. It just needs to be converted at this point
    # - checkdepend: See above
    # - makepkgopt: See above
    # - size: can be dynamically generated
    # - builddate: Should be changed to time of package conversion in the new
    #   package, so this value should be thrown away.
    
          # TODO(sissel): preinstall/postinstall
      # strip @prefix, since BASEDIR will set prefix via the pkginfo file
      IO.popen('pkgproto #{staging_path}/#{@prefix}=').each_line do |line|
        type, klass, path, mode, user, group = line.split
    
        cleanup_staging
    # Tell 'dir' to input '.' and chdir/prefix will help it figure out the
    # rest.
    dir.input('.')
    @staging_path = dir.staging_path
    dir.cleanup_build
  end # def input
    
        realpath = Pathname.new(input_path).realpath.to_s
    ::Dir.chdir(build_path) do
      safesystem('unzip', realpath)
    end
    
        (@source.empty? || @target.empty? || options.name.empty?) &&
      abort('Must specify package name, source and output')