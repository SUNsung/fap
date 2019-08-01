
        
                if value.nil?
          unless block_given?
            # The config file has something like this:
            #
            #   clean
            #
            # without specifying a value for the method call
            # or a block. This is most likely a user error
            # So we tell the user that they can provide a value
            warning = ['In the config file '#{self.configfile_path}'']
            warning << 'you have the line #{method_sym}, but didn't provide'
            warning << 'any value. Make sure to append a value right after the'
            warning << 'option name. Make sure to check the docs for more information'
            UI.important(warning.join(' '))
          end
          return
        end
    
            # Decrease the size of the framed screenshot to fit into the defined padding + background
        frame_width = background.width - horizontal_frame_padding * 2
        frame_height = background.height - effective_text_height - vertical_frame_padding
    
    module Frameit
  class Runner
    def initialize
      downloader = FrameDownloader.new
      unless downloader.frames_exist?
        downloader.download_frames
      end
    end
    
          def self.category
        :misc
      end
    end
  end
end

    
        context '#update_build_information!' do
      it 'updates description' do
        updated_test_info = build.test_info.deep_copy
        updated_test_info.description = 'a newer description'
    
        ##
    # Return the session cookie.
    #
    # @return (String) the cookie-string in the RFC6265 format: https://tools.ietf.org/html/rfc6265#section-4.2.1
    def cookie
      @cookie.map(&:to_s).join(';')
    end
    
          # Set app submission information
      # Default Values
      submission.content_rights_contains_third_party_content = false
      submission.content_rights_has_rights = true
      submission.add_id_info_uses_idfa = false
    
      describe :find_build do
    context 'one build' do
      let(:fake_builds) { make_fake_builds(1) }
      it 'finds the one build' do
        only_build = fake_builds.first
        expect(review_submitter.find_build(fake_builds)).to eq(only_build)
      end
    end
    
    module Snapshot
  # Responsible for building the fully working xcodebuild command
  # Xcode 9 introduced the ability to run tests in parallel on multiple simulators
  # This TestCommandGenerator constructs the appropriate `xcodebuild` command
  # to be used for executing simultaneous tests
  class TestCommandGenerator < TestCommandGeneratorBase
    class << self
      def generate(devices: nil, language: nil, locale: nil, log_path: nil)
        parts = prefix
        parts << 'xcodebuild'
        parts += options(language, locale)
        parts += destination(devices)
        parts += build_settings
        parts += actions
        parts += suffix
        parts += pipe(language: language, locale: locale, log_path: log_path)
    
          def self.description
        'Get the build number of your project'
      end
    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        SCHEME_RGX = /\A[^:\/?#]+:/
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
          def fetch_redirections
        result = {}
        with_filters 'apply_base_url', 'container', 'normalize_urls', 'internal_urls' do
          build_pages do |page|
            next if page[:response_effective_path] == page[:response_path]
            result[page[:response_path].downcase] = page[:response_effective_path]
          end
        end
        result
      end
    
            css('br', 'hr', '.material-icons', '.header-link', '.breadcrumb').remove
    
            css('.openParens').each do |node|
          node.parent.name = 'pre'
          node.parent.content = node.parent.css('code, pre').map(&:content).join('\n')
        end
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
          def template_paths
        template_path = _prefixes.dup
        template_path.unshift '#{@devise_mapping.scoped_path}/mailer' if self.class.scoped_views?
        template_path
      end
    
      #
  # Attempts to enter exclusive section.  Returns +false+ if lock fails.
  #
  def mon_try_enter
    if @mon_owner != Thread.current
      unless @mon_mutex.try_lock
        return false
      end
      @mon_owner = Thread.current
      @mon_count = 0
    end
    @mon_count += 1
    return true
  end
  # For backward compatibility
  alias try_mon_enter mon_try_enter
    
        super
  end
    
      def setup
    super
    
      def header
    <<-'HEADER'
# SOME DESCRIPTIVE TITLE.
# Copyright (C) YEAR THE PACKAGE'S COPYRIGHT HOLDER
# This file is distributed under the same license as the PACKAGE package.
# FIRST AUTHOR <EMAIL@ADDRESS>, YEAR.
#, fuzzy
msgid ''
msgstr ''
'Project-Id-Version: PACKAGE VERSEION\n'
'Report-Msgid-Bugs-To:\n'
'PO-Revision-Date: YEAR-MO_DA HO:MI+ZONE\n'
'Last-Translator: FULL NAME <EMAIL@ADDRESS>\n'
'Language-Team: LANGUAGE <LL@li.org>\n'
'Language:\n'
'MIME-Version: 1.0\n'
'Content-Type: text/plain; charset=CHARSET\n'
'Content-Transfer-Encoding: 8bit\n'
'Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\n'
    HEADER
  end
    
    msgid 'Hello'
msgstr 'Bonjour'
      PO
    end
    
            para('Pluses tight:'),
        list(:BULLET,
          item(nil, para('Plus 1')),
          item(nil, para('Plus 2')),
          item(nil, para('Plus 3'))),
        para('Pluses loose:'),
        list(:BULLET,
          item(nil, para('Plus 1')),
          item(nil, para('Plus 2')),
          item(nil, para('Plus 3'))),
    
      def test_html_like_teletype_em_bold_SGML
    assert_equal [@tt_on, 'cat', @tt_off, ' ', @em_on, 'and ', @em_to_bold, 'dog', @bold_off],
                  @am.flow('<tt>cat</tt> <i>and <b></i>dog</b>')
  end
    
    class TestRDocMarkupAttributes < RDoc::TestCase
    
    require_relative 'converter/fonts_conversion'
require_relative 'converter/less_conversion'
require_relative 'converter/js_conversion'
require_relative 'converter/logger'
require_relative 'converter/network'
    
            new(sandbox, sandbox.root.to_s, pods_project, umbrella_targets_descriptions)
      end
    
              # Ensure that vendored static frameworks and libraries are not linked
          # twice to the aggregate target, which shares the xcconfig of the user
          # target.
          #
          def custom_build_settings
            settings = {
              'CODE_SIGN_IDENTITY[sdk=appletvos*]' => '',
              'CODE_SIGN_IDENTITY[sdk=iphoneos*]'  => '',
              'CODE_SIGN_IDENTITY[sdk=watchos*]'   => '',
              'MACH_O_TYPE'                        => 'staticlib',
              'OTHER_LDFLAGS'                      => '',
              'OTHER_LIBTOOLFLAGS'                 => '',
              'PODS_ROOT'                          => '$(SRCROOT)',
              'PRODUCT_BUNDLE_IDENTIFIER'          => 'org.cocoapods.${PRODUCT_NAME:rfc1034identifier}',
              'SKIP_INSTALL'                       => 'YES',
    }
    
            # @return [String] the string to use as prefix for every build phase declared by the user within a podfile
        #         or podspec.
        #
        USER_BUILD_PHASE_PREFIX = '[CP-User] '.freeze
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end