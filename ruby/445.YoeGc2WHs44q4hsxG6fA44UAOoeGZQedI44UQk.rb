
        
            def sort_fn(a, b)
      if (a.getbyte(0) >= 49 && a.getbyte(0) <= 57) || (b.getbyte(0) >= 49 && b.getbyte(0) <= 57)
        a_split = a.split(SPLIT_INTS)
        b_split = b.split(SPLIT_INTS)
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
          private
    
            css('.l-sub-section', '.alert', '.banner').each do |node|
          node.name = 'blockquote'
        end
    
        self.audio_buff = []
    
                k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
            k3 = OpenSSL::HMAC.digest('MD5', k1, checksum)
    
              # Retrieves the element instance fields
          #
          # @return [Array]
          def attributes
            self.class.attributes
          end
    
                self
          end
    
    namespace :bower do
    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
      let!(:order) { create(:order_ready_to_ship, number: 'R100', state: 'complete', line_items_count: 5) }
    
                result = update_service.call(
              order: spree_current_order,
              params: params,
              # defined in https://github.com/spree/spree/blob/master/core/lib/spree/core/controller_helpers/strong_parameters.rb#L19
              permitted_attributes: permitted_checkout_attributes,
              request_env: request.headers.env
            )
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
        # do channel-update if requested
    if attributes[:pear_channel_update?]
      channel = attributes[:pear_channel] || 'pear'
      logger.info('Updating the channel', :channel => channel)
      safesystem('pear', '-c', config, 'channel-update', channel)
    end
    
        libs = [ 'install.sh', 'install-path.sh', 'generate-cleanup.sh' ]
    libs.each do |file|
      base = staging_path(File.join(attributes[:prefix]))
      File.write(File.join(base, file), template(File.join('pleaserun', file)).result(binding))
      File.chmod(0755, File.join(base, file))
    end
    
      option '--downcase-name', :flag, 'Should the target package name be in ' \
    'lowercase?', :default => true
  option '--downcase-dependencies', :flag, 'Should the package dependencies ' \
    'be in lowercase?', :default => true
    
        # Make one file. The installscript can unpack itself.
    `cat #{install_script} #{payload} > #{output_path}`
    FileUtils.chmod('+x', output_path)
  end
    
        template = template('solaris.erb')
    File.open('#{build_path}/pkginfo', 'w') do |pkginfo|
      pkginfo.puts template.result(binding)
    end
    
        # FIXME: don't assume current directory writeable
    FileUtils.touch(['fpm-dummy.tmp'])
    ['ar', 'gar'].each do |ar|
      ['-qc', '-qcD'].each do |ar_create_opts|
        FileUtils.rm_f(['fpm-dummy.ar.tmp'])
        # Return this combination if it creates archives without uids or timestamps.
        # Exitstatus will be nonzero if the archive can't be created,
        # or its table of contents doesn't match the regular expression.
        # Be extra-careful about locale and timezone when matching output.
        system('#{ar} #{ar_create_opts} fpm-dummy.ar.tmp fpm-dummy.tmp 2>/dev/null && env TZ=UTC LANG=C LC_TIME=C #{ar} -tv fpm-dummy.ar.tmp | grep '0/0.*1970' > /dev/null 2>&1')
        if $?.exitstatus == 0
           @@ar_cmd = [ar, ar_create_opts]
           @@ar_cmd_deterministic = true
           return @@ar_cmd
        end
      end
    end
    # If no combination of ar and options omits timestamps, fall back to default.
    @@ar_cmd = ['ar', '-qc']
    return @@ar_cmd
  ensure
    # Clean up
    FileUtils.rm_f(['fpm-dummy.ar.tmp', 'fpm-dummy.tmp'])
  end # def ar_cmd
    
          prefix = ''
      if name.bytesize > 100 then
        parts = name.split('/', -1) # parts are never empty here
        name = parts.pop            # initially empty for names with a trailing slash ('foo/.../bar/')
        prefix = parts.join('/')    # if empty, then it's impossible to split (parts is empty too)
        while !parts.empty? && (prefix.bytesize > 155 || name.empty?)
          name = parts.pop + '/' + name
          prefix = parts.join('/')
        end