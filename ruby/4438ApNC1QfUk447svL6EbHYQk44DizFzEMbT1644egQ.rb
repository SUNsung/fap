
        
                  # Generate default options for collection helpers, such as :checked and
          # :disabled.
          def default_html_options_for_collection(item, value)
            html_options = @html_options.dup
    
          def self.delegate_to(klass)
        self.type_klass = klass
      end
    
          test 'when specify to inherit and an :only option which does not match current action name and is opposite from parent controller' do
        controller = WithOnlyConditionalFlippedAndInheriting.new
        controller.process(:index)
        assert_equal 'Overwrite Hello index!', controller.response_body
      end
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
            def importer_class
          DiffNoteImporter
        end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
            # attributes - A hash containing the raw issue details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
    
            '#{route.request_method} #{route.path}' if route
      end
    end
  end
end

    
        v = (0.0..1.0).bsearch {|x| x > 0 } # the nearest positive value to 0.0
    assert_in_delta(0, v, 0.0001)
    assert_operator(0, :<, v)
    assert_equal(0.0, (-1.0..0.0).bsearch {|x| x >= 0 })
    assert_equal(nil, (-1.0...0.0).bsearch {|x| x >= 0 })
    
    def tar_create(tarball, dir)
  require 'rubygems'
  require 'rubygems/package'
  require 'rubygems/package/tar_writer'
  header = Gem::Package::TarHeader
  dir_type = '5'
  uname = gname = 'ruby'
  File.open(tarball, 'wb') do |f|
    w = Gem::Package::TarWriter.new(f)
    Dir.glob('#{dir}/**/*', File::FNM_DOTMATCH) do |path|
      next if File.basename(path) == '.'
      s = File.stat(path)
      mode = 0644
      case
      when s.file?
        type = nil
        size = s.size
        mode |= 0111 if s.executable?
      when s.directory?
        path += '/'
        type = dir_type
        size = 0
        mode |= 0111
      else
        next
      end
      name, prefix = w.split_name(path)
      h = header.new(name: name, prefix: prefix, typeflag: type,
                     mode: mode, size: size, mtime: s.mtime,
                     uname: uname, gname: gname)
      f.write(h)
      if size > 0
        IO.copy_stream(path, f)
        f.write('\0' * (-size % 512))
      end
    end
  end
  true
rescue => e
  warn e.message
  false
end
    
      # :stopdoc:
  def _dispatch_0() nil end
  def _dispatch_1(a) a end
  def _dispatch_2(a, b) a end
  def _dispatch_3(a, b, c) a end
  def _dispatch_4(a, b, c, d) a end
  def _dispatch_5(a, b, c, d, e) a end
  def _dispatch_6(a, b, c, d, e, f) a end
  def _dispatch_7(a, b, c, d, e, f, g) a end
  # :startdoc:
    
      it 'changes when the module is reachable through a constant path' do
    m = Module.new
    module m::N; end
    m::N.name.should =~ /#<Module:0x[0-9a-f]+>::N/
    ModuleSpecs::Anonymous::WasAnnon = m::N
    m::N.name.should == 'ModuleSpecs::Anonymous::WasAnnon'
  end
    
      def test_ed_newline_with_cr
    input_keys('ab')
    assert_byte_pointer_size('ab')
    assert_cursor(2)
    assert_cursor_max(2)
    refute(@line_editor.finished?)
    input_keys('\C-m')
    assert_line('ab')
    assert(@line_editor.finished?)
  end
    
        pod 'Alamofire', path: '../Alamofire Example/Alamofire'
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
        pax_slash = ret.rindex('/')
    if(pax_slash == nil)
      pax_slash = 0
    else
      pax_slash = ret.rindex('/', pax_slash-1)
      if(pax_slash == nil || pax_slash < 0)
        pax_slash = 0
      end
    end
    
        args = ['--identifier', identifier,
            '--info', temp_info,
            '--version', version.to_s,
            '--ownership', attributes[:osxpkg_ownership]]
    
      def architecture
    case @architecture
      when nil
        return %x{uname -m}.chomp   # default to current arch
      when 'amd64' # debian and pacman disagree on architecture names
        return 'x86_64'
      when 'native'
        return %x{uname -m}.chomp   # 'native' is current arch
      when 'all', 'any', 'noarch'
        return 'any'
      else
        return @architecture
    end
  end # def architecture
    
      # Returns the path to the tar file containing the packed up staging directory
  def payload
    payload_tar = build_path('payload.tar')
    logger.info('Creating payload tar ', :path => payload_tar)
    
      private