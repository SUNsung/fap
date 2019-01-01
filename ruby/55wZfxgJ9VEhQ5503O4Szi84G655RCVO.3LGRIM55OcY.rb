
        
              # Converts the array to a comma-separated sentence where the last element is
      # joined by the connector word. This is the html_safe-aware version of
      # ActiveSupport's {Array#to_sentence}[http://api.rubyonrails.org/classes/Array.html#method-i-to_sentence].
      #
      def to_sentence(array, options = {})
        options.assert_valid_keys(:words_connector, :two_words_connector, :last_word_connector, :locale)
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class Base # :nodoc:
        include Helpers::ActiveModelInstanceTag, Helpers::TagHelper, Helpers::FormTagHelper
        include FormOptionsHelper
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class DateSelect < Base # :nodoc:
        def initialize(object_name, method_name, template_object, options, html_options)
          @html_options = html_options
    
        initializer 'action_view.per_request_digest_cache' do |app|
      ActiveSupport.on_load(:action_view) do
        unless ActionView::Resolver.caching?
          app.executor.to_run ActionView::Digestor::PerExecutionDigestCacheExpiry
        end
      end
    end
    
          keg_only_deps.each do |dep|
        ENV.prepend_path 'PATH', dep.opt_bin.to_s
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_lib}/pkgconfig'
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_share}/pkgconfig'
        ENV.prepend_path 'ACLOCAL_PATH', '#{dep.opt_share}/aclocal'
        ENV.prepend_path 'CMAKE_PREFIX_PATH', dep.opt_prefix.to_s
        ENV.prepend 'LDFLAGS', '-L#{dep.opt_lib}' if dep.opt_lib.directory?
        ENV.prepend 'CPPFLAGS', '-I#{dep.opt_include}' if dep.opt_include.directory?
      end
    end
    
    class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      # True if a {Formula} is being built with a specific option.
  # <pre>args << '--i-want-spam' if build.with? 'spam'
  #
  # args << '--qt-gui' if build.with? 'qt' # '--with-qt' ==> build.with? 'qt'
  #
  # # If a formula presents a user with a choice, but the choice must be fulfilled:
  # if build.with? 'example2'
  #   args << '--with-example2'
  # else
  #   args << '--with-example1'
  # end</pre>
  def with?(val)
    option_names = val.respond_to?(:option_names) ? val.option_names : [val]
    
        if !Language::Python.in_sys_path?('python', homebrew_site_packages)
      s = <<-EOS.undent
        Python modules have been installed and Homebrew's site-packages is not
        in your Python sys.path, so you will not be able to import the modules
        this formula installed. If you plan to develop with these modules,
        please run:
      EOS
      s += instructions
    elsif keg.python_pth_files_installed?
      s = <<-EOS.undent
        This formula installed .pth files to Homebrew's site-packages and your
        Python isn't configured to process them, so you will not be able to
        import the modules this formula installed. If you plan to develop
        with these modules, please run:
      EOS
      s += instructions
    end
    s
  end
    
          if path.symlink? || path.directory?
        next
      elsif path.extname == '.la'
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if path.mach_o_executable? || path.text_executable?
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end

    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
      def search_formulae(rx)
    aliases = Formula.alias_full_names
    results = (Formula.full_names+aliases).grep(rx).sort
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
          it 'should be valid when the url points to a valid scenario' do
        stub_request(:get, 'http://example.com/scenarios/1/export.json').to_return(:status => 200, :body => valid_data)
        subject.url = 'http://example.com/scenarios/1/export.json'
        expect(subject).to be_valid
      end
    end
    
          a = '        Events will have the fields you specified.  Your options look like:\n\n            {\n      \'url\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@src\'\n      },\n      \'title\': {\n        \'css\': \'#comic img\',\n        \'value\': \'@title\'\n      }\n    }\'\n'
      expect(Utils.unindent(a)).to eq('Events will have the fields you specified.  Your options look like:\n\n    {\n      \'url\': {\n\'css\': \'#comic img\',\n\'value\': \'@src\'\n      },\n      \'title\': {\n\'css\': \'#comic img\',\n\'value\': \'@title\'\n      }\n    }\'')
    end
  end
    
          included do
        include Devise::Controllers::ScopedViews
      end
    
    
  #
  # Waits for the HTTP service to terminate
  #
  def wait
    self.listener.wait if self.listener
  end
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
        data =
      [0x00, 0x00, 0x00, 0x00].pack('C*') +
      bmc_session_id +
      console_random_id +
      [
        0x14, 0x00, 0x00,
        username.length
      ].pack('C*') +
      username
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Principal into an String
          #
          # @return [String] encoded principal
          def encode
            encoded = ''
            encoded << encode_name_type
            encoded << [components.length].pack('N')
            encoded << encode_realm
            encoded << encode_components
    
              # Encodes the options field
          #
          # @return [OpenSSL::ASN1::BitString]
          def encode_options
            OpenSSL::ASN1::BitString.new([options].pack('N'))
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
    
              # Decodes the nonce field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_nonce(input)
            input.value[0].value.to_i
          end
    
              # Rex::Proto::Kerberos::Model::LastRequest encoding isn't supported
          #
          # @raise [NotImplementedError]
          def encode
            raise ::NotImplementedError, 'LastRequest encoding not supported'
          end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
    MiniTest::Reporters.use!
    
    #############################################################################
#
# Custom tasks (add your own tasks here)
#
#############################################################################
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
          # Checks whether the `if` node has at least one `elsif` branch. Returns
      # true if this `if` node itself is an `elsif`.
      #
      # @return [Boolean] whether the `if` node has at least one `elsif` branch
      def elsif_conditional?
        else_branch && else_branch.if_type? && else_branch.elsif?
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end
