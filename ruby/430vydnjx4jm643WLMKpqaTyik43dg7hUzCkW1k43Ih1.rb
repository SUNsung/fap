
        
          smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            grouping: 'grouping',
            build_number: 'build_number',
            prefix: 'prefix',
          })
        end').runner.execute(:test)
    
            expect(result).to include(''fastlane/spec/fixtures/oclint/src/AppDelegate.m'')
      end
    
          # We need to explicity test against Fastlane::Boolean, TrueClass/FalseClass
      if value.class != FalseClass && value.class != TrueClass
        UI.user_error!(''#{self.key}' value must be either `true` or `false`! Found #{value.class} instead.')
      end
    end
    
          it 'should shell escape keychain names when checking for installation' do
        expect(FastlaneCore::CertChecker).to receive(:wwdr_keychain).and_return(keychain_name)
        expect(FastlaneCore::Helper).to receive(:backticks).with(name_regex, anything).and_return('')
    
            it 'does not auto convert Array values to Strings if not allowed' do
          config_item = FastlaneCore::ConfigItem.new(key: :xcargs,
                                                     description: 'xcargs',
                                                     type: String)
    
    shellescape_testcases = [
  # baseline
  {
    'it' => '(#1) on simple string',
    'it_result' => {
      'windows' => 'doesn't change it',
      'other'   => 'doesn't change it'
    },
    'str' => 'normal_string_without_spaces',
    'expect' => {
      'windows' => 'normal_string_without_spaces',
      'other'   => 'normal_string_without_spaces'
    }
  },
  {
    'it' => '(#2) on empty string',
    'it_result' => {
      'windows' => 'wraps it in double quotes',
      'other'   => 'wraps it in single quotes'
    },
    'str' => '',
    'expect' => {
      'windows' => '''',
      'other'   => '\'\''
    }
  },
  # spaces
  {
    'it' => '(#3) on string with spaces',
    'it_result' => {
      'windows' => 'wraps it in double quotes',
      'other'   => 'escapes spaces with <backslash>'
    },
    'str' => 'string with spaces',
    'expect' => {
      'windows' => ''string with spaces'',
      'other'   => 'string\ with\ spaces'
    }
  },
  # double quotes
  {
    'it' => '(#4) on simple string that is already wrapped in double quotes',
    'it_result' => {
      'windows' => 'doesn't touch it',
      'other'   => 'escapes the double quotes with <backslash>'
    },
    'str' => ''normal_string_without_spaces'',
    'expect' => {
      'windows' => ''normal_string_without_spaces'',
      'other'   => '\'normal_string_without_spaces\''
    }
  },
  {
    'it' => '(#5) on string with spaces that is already wrapped in double quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and duplicates existing double quotes',
      'other'   => 'escapes the double quotes and spaces with <backslash>'
    },
    'str' => ''string with spaces already wrapped in double quotes'',
    'expect' => {
      'windows' => ''''string with spaces already wrapped in double quotes'''',
      'other'   => '\'string\ with\ spaces\ already\ wrapped\ in\ double\ quotes\''
    }
  },
  {
    'it' => '(#6) on string with spaces and double quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and duplicates existing double quotes',
      'other'   => 'escapes the double quotes and spaces with <backslash>'
    },
    'str' => 'string with spaces and 'double' quotes',
    'expect' => {
      'windows' => ''string with spaces and ''double'' quotes'',
      'other'   => 'string\ with\ spaces\ and\ \'double\'\ quotes'
    }
  },
  # https://github.com/ruby/ruby/blob/ac543abe91d7325ace7254f635f34e71e1faaf2e/test/test_shellwords.rb#L64-L65
  {
    'it' => '(#7) on simple int',
    'it_result' => {
      'windows' => 'doesn't change it',
      'other'   => 'doesn't change it'
    },
    'str' => 3,
    'expect' => {
      'windows' => '3',
      'other'   => '3'
    }
  },
  # single quotes
  {
    'it' => '(#8) on simple string that is already wrapped in single quotes',
    'it_result' => {
      'windows' => 'doesn't touch it',
      'other'   => 'escapes the single quotes with <backslash>'
    },
    'str' => ''normal_string_without_spaces'',
    'expect' => {
      'windows' => ''normal_string_without_spaces'',
      'other'   => '\\'normal_string_without_spaces\\''
    }
  },
  {
    'it' => '(#9) on string with spaces that is already wrapped in single quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the single quotes and spaces with <backslash>'
    },
    'str' => ''string with spaces already wrapped in single quotes'',
    'expect' => {
      'windows' => '\''string with spaces already wrapped in single quotes'\'',
      'other'   => '\\'string\\ with\\ spaces\\ already\\ wrapped\\ in\\ single\\ quotes\\''
    }
  },
  {
    'it' => '(#10) string with spaces and single quotes',
    'it_result' => {
      'windows' => 'wraps in double quotes and leaves single quotes',
      'other'   => 'escapes the single quotes and spaces with <backslash>'
    },
    'str' => 'string with spaces and 'single' quotes',
    'expect' => {
      'windows' => '\'string with spaces and 'single' quotes\'',
      'other'   => 'string\ with\ spaces\ and\ \\\'single\\\'\ quotes'
    }
  },
  {
    'it' => '(#11) string with spaces and <backslash>',
    'it_result' => {
      'windows' => 'wraps in double quotes and escapes the backslash with backslash',
      'other'   => 'escapes the spaces and the backslash (which in results in quite a lot of them)'
    },
    'str' => 'string with spaces and \\ in it',
    'expect' => {
      'windows' => '\'string with spaces and \\ in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\\\\\ in\\ it'
    }
  },
  {
    'it' => '(#12) string with spaces and <slash>',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces'
    },
    'str' => 'string with spaces and / in it',
    'expect' => {
      'windows' =>  '\'string with spaces and / in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ /\\ in\\ it'
    }
  },
  {
    'it' => '(#13) string with spaces and parens',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces and parens'
    },
    'str' => 'string with spaces and (parens) in it',
    'expect' => {
      'windows' => '\'string with spaces and (parens) in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\(parens\\)\\ in\\ it'
    }
  },
  {
    'it' => '(#14) string with spaces, single quotes and parens',
    'it_result' => {
      'windows' => 'wraps in double quotes',
      'other'   => 'escapes the spaces, single quotes and parens'
    },
    'str' => 'string with spaces and 'quotes' (and parens) in it',
    'expect' => {
      'windows' => '\'string with spaces and 'quotes' (and parens) in it\'',
      'other'   => 'string\\ with\\ spaces\\ and\\ \\'quotes\\'\\ \\(and\\ parens\\)\\ in\\ it'
    }
  }
]
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
      private
    
          # Sign in a user bypassing the warden callbacks and stores the user
      # straight in session. This option is useful in cases the user is already
      # signed in, but we want to refresh the credentials in session.
      #
      # Examples:
      #
      #   bypass_sign_in @user, scope: :user
      #   bypass_sign_in @user
      def bypass_sign_in(resource, scope: nil)
        scope ||= Devise::Mapping.find_scope!(resource)
        expire_data_after_sign_in!
        warden.session_serializer.store(resource, scope)
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          if options.has_key?(:only)
        @used_routes = self.routes & Array(options[:only]).map(&singularizer)
      elsif options[:skip] == :all
        @used_routes = []
      else
        @used_routes = self.routes - Array(options[:skip]).map(&singularizer)
      end
    end
    
          def remember_me?(token, generated_at)
        # TODO: Normalize the JSON type coercion along with the Timeoutable hook
        # in a single place https://github.com/plataformatec/devise/blob/ffe9d6d406e79108cf32a2c6a1d0b3828849c40b/lib/devise/hooks/timeoutable.rb#L14-L18
        if generated_at.is_a?(String)
          generated_at = time_from_json(generated_at)
        end
    
    module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
          if @report_note.save
        if params[:create_and_resolve]
          @report.resolve!(current_account)
          log_action :resolve, @report
    
      private
    
        render_empty
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end