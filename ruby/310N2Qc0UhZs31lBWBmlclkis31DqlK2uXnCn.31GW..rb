        def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # Sets multiple keys to a given value.
      #
      # mapping - A Hash mapping the cache keys to their values.
      # timeout - The time after which the cache key should expire.
      def self.write_multiple(mapping, timeout: TIMEOUT)
        Redis::Cache.with do |redis|
          redis.multi do |multi|
            mapping.each do |raw_key, value|
              multi.set(cache_key_for(raw_key), value, ex: timeout)
            end
          end
        end
      end
    
            def execute
          create_labels
        end
    
            def importer_class
          LfsObjectImporter
        end
    
          private
    
        subdirs = Dir.chdir(SimpleCov.root) { Dir.glob('*') }
                 .reject { |d| d.end_with?('.rb') || ['test', 'vendor'].include?(d) }
                 .map { |d| '#{d}/**/*.rb' }.join(',')
    
      # Returns parsed JavaScript blocks.
  # The parsed version is a RKelly object that allows you to be able do advanced parsing.
  #
  # @see https://github.com/tenderlove/rkelly
  # @return [Array<RKelly::Nodes::SourceElementsNode>]
  def get_html_scripts
    n = get_html_document
    rkelly = RKelly::Parser.new
    n.search('//script').map { |s| rkelly.parse(s.text) }
  end
    
              def initialize(options = {})
            self.class.attributes.each do |attr|
              if options.has_key?(attr)
                m = (attr.to_s + '=').to_sym
                self.send(m, options[attr])
              end
            end
          end
    
              # Encodes a Rex::Proto::Kerberos::Model::EncryptionKey into an
          # ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_value], 1, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new(elems)
    
              # Decodes the crealm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_crealm(input)
            input.value[0].value
          end
    
              delta(first.value.loc, second.value.loc)
        end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
        assert_no_match /New/, last_response.body, ''New' link not blocked in pages template'
    
      s.authors  = ['Tom Preston-Werner', 'Rick Olson']
  s.email    = 'tom@github.com'
  s.homepage = 'http://github.com/gollum/gollum'
    
        # Create the .txz package archive from the files in staging_path.
    File.open(output_path, 'wb') do |file|
      XZ::StreamWriter.new(file) do |xz|
        FPM::Util::TarWriter.new(xz) do |tar|
          # The manifests must come first for pkg.
          add_path(tar, '+COMPACT_MANIFEST',
                   File.join(staging_path, '+COMPACT_MANIFEST'))
          add_path(tar, '+MANIFEST',
                   File.join(staging_path, '+MANIFEST'))
    
      def to_s_extension; 'pkg'; end
    
        args = [ '-B', build_path('build-info'), '-c', build_path('comment'), '-d', build_path('description'), '-f', build_path('packlist'), '-I', '/opt/local', '-p', staging_path,  '-U', '#{cwd}/#{name}-#{self.version}-#{iteration}.tgz' ]
    safesystem('pkg_create', *args)
    
        scripts[:after_install] = template(File.join('pleaserun', 'scripts', 'after-install.sh')).result(binding)
    scripts[:before_remove] = template(File.join('pleaserun', 'scripts', 'before-remove.sh')).result(binding)
  end # def input
    
        template = template('solaris.erb')
    File.open('#{build_path}/pkginfo', 'w') do |pkginfo|
      pkginfo.puts template.result(binding)
    end
    
        # Unpack the tarball to the staging path
    args = ['-cf', output_path, '-C', staging_path]
    tar_compression_flag(output_path).tap do |flag|
      args << flag unless flag.nil?
    end
    args << '.'
    
          one_to_increment = portion_to_work_with[0].to_i
      incremented = one_to_increment + 1
    
                namespace_reverse_stackable handler_type, Hash[args.map { |arg| [arg, handler] }]
          end
    
            def document_attribute(names, opts)
          setting = description_field(:params)
          setting ||= description_field(:params, {})
          Array(names).each do |name|
            setting[name[:full_name].to_s] ||= {}
            setting[name[:full_name].to_s].merge!(opts)