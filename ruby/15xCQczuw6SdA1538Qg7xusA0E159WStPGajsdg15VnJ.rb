
        
        DATA = {'foo'=>'bar', 'alpha'=>{'beta'=>'gamma'}, 'lipsum'=>['lorem', 'ipsum', 'dolor']}
    
      </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
          def jekyll
        JekyllDrop.global
      end
    
      # encoding uri
  attr_accessor :uri_encode_mode
    
      #
  # Closes the supplied client, if valid.
  #
  def close_client(cli)
    listener.close_client(cli)
  end
    
    
  #
  # Payload types were copied from xCAT-server source code (IPMI.pm)
  #
  RMCP_ERRORS = {
    1 => 'Insufficient resources to create new session (wait for existing sessions to timeout)',
    2 => 'Invalid Session ID', #this shouldn't occur...
    3 => 'Invalid payload type',#shouldn't occur..
    4 => 'Invalid authentication algorithm', #if this happens, we need to enhance our mechanism for detecting supported auth algorithms
    5 => 'Invalid integrity algorithm', #same as above
    6 => 'No matching authentication payload',
    7 => 'No matching integrity payload',
    8 => 'Inactive Session ID', #this suggests the session was timed out while trying to negotiate, shouldn't happen
    9 => 'Invalid role',
    0xa => 'Unauthorised role or privilege level requested',
    0xb => 'Insufficient resources to create a session at the requested role',
    0xc => 'Invalid username length',
    0xd => 'Unauthorized name',
    0xe => 'Unauthorized GUID',
    0xf => 'Invalid integrity check value',
    0x10 => 'Invalid confidentiality algorithm',
    0x11 => 'No cipher suite match with proposed security algorithms',
    0x12 => 'Illegal or unrecognized parameter', #have never observed this, would most likely mean a bug in xCAT or IPMI device
  }
    
              # Encodes the authenticator field
          #
          # @return [String]
          def encode_authenticator
            authenticator.encode
          end
        end
      end
    end
  end
end
    
              # Decodes the renew_till field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_renew_till(input)
            input.value[0].value
          end
    
              # Decodes the cipher from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Sting]
          def decode_cipher(input)
            input.value[0].value
          end
    
              # Encodes the Rex::Proto::Kerberos::Model::KdcRequestBody into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
    
          OptionParser.new do |opts|
        opts.banner = 'See full documentation at http://capistranorb.com/.'
        opts.separator ''
        opts.separator 'Install capistrano in a project:'
        opts.separator '    bundle exec cap install [STAGES=qa,staging,production,...]'
        opts.separator ''
        opts.separator 'Show available tasks:'
        opts.separator '    bundle exec cap -T'
        opts.separator ''
        opts.separator 'Invoke (or simulate invoking) a task:'
        opts.separator '    bundle exec cap [--dry-run] STAGE TASK'
        opts.separator ''
        opts.separator 'Advanced options:'
    
        def cmdline_filters
      @cmdline_filters ||= []
    end
    
          def untrusted_keys
        keys - @trusted_keys
      end
    
          def self.token(session)
        self.new(nil).mask_authenticity_token(session)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS and others
    # Supported browsers:: Firefox 23+, Safari 7+, Chrome 25+, Opera 15+
    #
    # Description:: Content Security Policy, a mechanism web applications
    #               can use to mitigate a broad class of content injection
    #               vulnerabilities, such as cross-site scripting (XSS).
    #               Content Security Policy is a declarative policy that lets
    #               the authors (or server administrators) of a web application
    #               inform the client about the sources from which the
    #               application expects to load resources.
    #
    # More info::   W3C CSP Level 1 : https://www.w3.org/TR/CSP1/ (deprecated)
    #               W3C CSP Level 2 : https://www.w3.org/TR/CSP2/ (current)
    #               W3C CSP Level 3 : https://www.w3.org/TR/CSP3/ (draft)
    #               https://developer.mozilla.org/en-US/docs/Web/Security/CSP
    #               http://caniuse.com/#search=ContentSecurityPolicy
    #               http://content-security-policy.com/
    #               https://securityheaders.io
    #               https://scotthelme.co.uk/csp-cheat-sheet/
    #               http://www.html5rocks.com/en/tutorials/security/content-security-policy/
    #
    # Sets the 'Content-Security-Policy[-Report-Only]' header.
    #
    # Options: ContentSecurityPolicy configuration is a complex topic with
    #          several levels of support that has evolved over time.
    #          See the W3C documentation and the links in the more info
    #          section for CSP usage examples and best practices. The
    #          CSP3 directives in the 'NO_ARG_DIRECTIVES' constant need to be
    #          presented in the options hash with a boolean 'true' in order
    #          to be used in a policy.
    #
    class ContentSecurityPolicy < Base
      default_options default_src: :none, script_src: ''self'',
                      img_src: ''self'', style_src: ''self'',
                      connect_src: ''self'', report_only: false
    
          def escape_string(str)
        str = @escaper.escape_url(str)        if @url
        str = @escaper.escape_html(str)       if @html
        str = @escaper.escape_javascript(str) if @javascript
        str
      end
    end
  end
end

    
    desc 'Generate jekyll site'
task :generate do
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  puts '## Generating Site with Jekyll'
  system 'compass compile --css-dir #{source_dir}/stylesheets'
  system 'jekyll build'
end
    
    end
    
          get_web_content(redirected_url)
    end
    
          def invoke(*args)
        chain = retrieve.dup
        traverse_chain = lambda do
          if chain.empty?
            yield
          else
            chain.shift.call(*args, &traverse_chain)
          end
        end
        traverse_chain.call
      end
    end
    
        def json(payload)
      [200, { 'Content-Type' => 'application/json', 'Cache-Control' => 'no-cache' }, [Sidekiq.dump_json(payload)]]
    end
    
        NAMED_SEGMENTS_PATTERN = /\/([^\/]*):([^\.:$\/]+)/
    
    # Set some attributes
package.name = 'my-service'
package.version = '1.0'
    
        # If --exclude-file was specified, read it as a file and append to
    # the exclude pattern list.
    if !exclude_file.nil?
      if !File.exists?(exclude_file)
        logger.fatal('File given for --exclude-file does not exist (#{exclude_file})')
        return 1
      end
    
      TAR_CHUNK_SIZE = 512
  TAR_TYPEFLAG_OFFSET = 156
  TAR_NAME_OFFSET_START = 0
  TAR_NAME_OFFSET_END = 99
  TAR_LENGTH_OFFSET_START = 124
  TAR_LENGTH_OFFSET_END = 135
  TAR_CHECKSUM_OFFSET_START = 148
  TAR_CHECKSUM_OFFSET_END = 155
  TAR_MAGIC_START = 257
  TAR_MAGIC_END = 264
  TAR_UID_START = 108
  TAR_UID_END = 115
  TAR_GID_START = 116
  TAR_GID_END = 123
  TAR_UNAME_START = 265
  TAR_UNAME_END = 296
  TAR_GNAME_START = 297
  TAR_GNAME_END = 328
  TAR_MAJOR_START = 329
  TAR_MAJOR_END = 336
  TAR_MINOR_START = 337
  TAR_MINOR_END = 344
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end