
        
        def local_require
  require 'json'
  JSON.pretty_generate(DATA)
end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
    Jekyll::PluginManager.require_from_bundler
    
        def deprecation_message(message)
      Jekyll.logger.warn 'Deprecation:', message
    end
    
          def parse_expression(str)
        Liquid::Variable.new(str, Liquid::ParseContext.new)
      end
    
            def importer_class
          IssueAndLabelLinksImporter
        end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
          def initialize(app)
        @app = app
      end
    
        self.code    = code.to_i
    self.message = message
    self.proto   = proto
    
        # Convert u-law into signed PCM
    when IAX_CODEC_G711_MULAW
      Rex::Proto::IAX2::Codecs::MuLaw.decode(buff)
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
              # Decodes the auth_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_auth_time(input)
            input.value[0].value
          end
    
              # Encodes the etype
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_etype
            bn = OpenSSL::BN.new(etype.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the Rex::Proto::Kerberos::Model::KdcResponse from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KdcResponse, invalid input'
            end
    
              # Decodes the Rex::Proto::Kerberos::Model::KrbError from an input
          #
          # @param input [String, OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::ASN1Data
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode KrbError, invalid input'
            end
    
          # Returns an array of all the keys in the `hash` literal.
      #
      # @return [Array<Node>] an array of keys in the `hash` literal
      def keys
        each_key.to_a
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
            cop_names.each do |cop_name|
          yield qualified_cop_name(cop_name), disabled, comment_line_number,
                single_line
        end
      end
    end
    
      option ['-t', '--output-type'], 'OUTPUT_TYPE',
    'the type of package you want to create (deb, rpm, solaris, etc)',
    :attribute_name => :output_type
  option ['-s', '--input-type'], 'INPUT_TYPE',
    'the package type to use as input (gem, rpm, python, etc)',
    :attribute_name => :input_type
  option ['-C', '--chdir'], 'CHDIR',
    'Change directory to here before searching for files',
    :attribute_name => :chdir
  option '--prefix', 'PREFIX',
    'A path to prefix files with when building the target package. This may ' \
    'not be necessary for all input packages. For example, the 'gem' type ' \
    'will prefix with your gem directory automatically.'
  option ['-p', '--package'], 'OUTPUT', 'The package file path to output.'
  option ['-f', '--force'], :flag, 'Force output even if it will overwrite an ' \
    'existing file', :default => false
  option ['-n', '--name'], 'NAME', 'The name to give to the package'
    
        # Query details about our now-installed package.
    # We do this by using 'npm ls' with json + long enabled to query details
    # about the installed package.
    npm_ls_out = safesystemout(attributes[:npm_bin], 'ls', '--json', '--long', *npm_flags)
    npm_ls = JSON.parse(npm_ls_out)
    name, info = npm_ls['dependencies'].first
    
      # Take a flat package as input
  def input(input_path)
    # TODO: Fail if it's a Distribution pkg or old-fashioned
    expand_dir = File.join(build_path, 'expand')
    # expand_dir must not already exist for pkgutil --expand
    safesystem('pkgutil --expand #{input_path} #{expand_dir}')
    
        # do channel-discover if required
    if !attributes[:pear_channel].nil?
      logger.info('Custom channel specified', :channel => attributes[:pear_channel])
      channel_list = safesystemout('pear', '-c', config, 'list-channels')
      if channel_list !~ /#{Regexp.quote(attributes[:pear_channel])}/
        logger.info('Discovering new channel', :channel => attributes[:pear_channel])
        safesystem('pear', '-c', config, 'channel-discover', attributes[:pear_channel])
      end
      input_package = '#{attributes[:pear_channel]}/#{input_package}'
      logger.info('Prefixing package name with channel', :package => input_package)
    end
    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end
    
        args.flatten!.compact!