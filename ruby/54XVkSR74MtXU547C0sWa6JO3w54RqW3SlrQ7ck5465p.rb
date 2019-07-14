
        
        def extmake(target, basedir = 'ext', maybestatic = true)
  FileUtils.mkpath target unless File.directory?(target)
  begin
    # don't build if parent library isn't build
    parent = true
    d = target
    until (d = File.dirname(d)) == '.'
      if File.exist?('#{$top_srcdir}/#{basedir}/#{d}/extconf.rb')
        parent = (/^all:\s*install/ =~ IO.read('#{d}/Makefile') rescue false)
        break
      end
    end
    
    # :startdoc:

    
        private
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
        context 'update a specific plugin' do
      it 'has executed successfully' do
        cmd = logstash.run_command_in_path('bin/logstash-plugin update --no-verify #{plugin_name}')
        expect(cmd.stdout).to match(/Updating #{plugin_name}/)
        expect(logstash).not_to have_installed?(plugin_name, previous_version)
      end
    end
    
    
# This is a non obvious hack,
# EllipticalCurve are not completely implemented in JRuby 9k and the new version of SSH from the standard library
# use them.
#
# Details: https://github.com/jruby/jruby-openssl/issues/105
Net::SSH::Transport::Algorithms::ALGORITHMS.values.each { |algs| algs.reject! { |a| a =~ /^ecd(sa|h)-sha2/ } }
Net::SSH::KnownHosts::SUPPORTED_TYPE.reject! { |t| t =~ /^ecd(sa|h)-sha2/ }