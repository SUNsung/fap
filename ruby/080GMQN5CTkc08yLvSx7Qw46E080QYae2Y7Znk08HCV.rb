
        
          def test_localized_template_has_correct_header_with_no_format_in_template_name
    I18n.locale = :it
    get :hello_world
    assert_equal 'Ciao Mondo', @response.body
    assert_equal 'text/html',  @response.media_type
  end
end

    
    module ActionView
  class Template #:nodoc:
    class Types
      class Type
        SET = Struct.new(:symbols).new([ :html, :text, :js, :css, :xml, :json ])
    
        # identifies the resolution of a video using `ffmpeg`
    # @param video_path (String) the path to the video file
    # @return [Array] the resolution of the video
    def video_resolution(video_path)
      command = 'ffmpeg -i \'#{video_path}\' 2>&1'
      # puts 'COMMAND: #{command}'
      output = `#{command}`
      # Note: ffmpeg exits with 1 if no output specified
      # raise 'Failed to find video information from #{video_path} (using #{command})' unless $CHILD_STATUS.to_i == 0
      output = output.force_encoding('BINARY')
      video_infos = output.split('\n').select { |l| l =~ /Stream.*Video/ }
      raise 'Unable to find Stream Video information from ffmpeg output of #{command}' if video_infos.count == 0
      video_info = video_infos[0]
      res = video_info.match(/.* ([0-9]+)x([0-9]+).*/)
      raise 'Unable to parse resolution information from #{video_info}' if res.size < 3
      [res[1].to_i, res[2].to_i]
    end
    
          # Push all changes that were made back to App Store Connect
      def save!
        client.update_app_version!(application.apple_id, self.version_id, raw_data)
      end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :fallback_changelog,
                                       description: 'Fallback changelog if there is not one on Jenkins, or it couldn't be read',
                                       optional: true,
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :include_commit_body,
                                       description: 'Include the commit body along with the summary',
                                       optional: true,
                                       is_string: false,
                                       default_value: true)
        ]
      end
    
            version_podspec_file = Helper::PodspecHelper.new(podspec_path, params[:require_variable_prefix])
    
            consts = extract_const_assignment(node)
        consts.each { |const| self.shared_values_constants << const.to_s }
      end
    
    lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'capistrano/version'
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
        stdout.strip
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
    
    RSpec.describe 'StoriesShow', type: :request do
  let(:user)         { create(:user) }
  let(:article)      { create(:article, user_id: user.id) }
    
        Rails.cache.fetch(cache_key, expires_in: 1.hour) do
      src = GeneratedImage.new(article).social_image
      return src if src.start_with? 'https://res.cloudinary.com/'
    
    module URI
  ;
  class << self
# Does the char code correspond to an alpha-numeric char.
# isAlphaNumeric('a'.ord) => true
# isAlphaNumeric(''.ord) => false
    def isAlphaNumeric(cc)
      # a - z
      if (97 <= cc && cc <= 122);
        return true
      end
      # A - Z
      if (65 <= cc && cc <= 90);
        return true
      end
      # 0 - 9
      if (48 <= cc && cc <= 57);
        return true
      end
    
          @right_diff_line_number = nil
    
          def previous_link
        label = '&laquo; Previous'
        if @page_num == 1
          %(<span class='disabled'>#{label}</span>)
        else
          link = url('/history/#{@page.name}?page=#{@page_num-1}')
          %(<a href='#{link}' hotkey='h'>#{label}</a>)
        end
      end
    
        assert_no_match /Edit Page/,             last_response.body, ''Edit Page' link not blocked in compare template'
    assert_no_match /Revert Changes/,        last_response.body, ''Revert Changes' link not blocked in compare template'
  end
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
      # determine file list from git ls-files
  files = `git ls-files`.
    split('\n').
    sort.
    reject { |file| file =~ /^\./ }.
    reject { |file| file =~ /^(rdoc|pkg|test|Home\.md|\.gitattributes)/ }.
    map { |file| '    #{file}' }.
    join('\n')
    
      begin
    require 'gollum-lib'
    wiki = Gollum::Wiki.new(gollum_path, wiki_options)
    if !wiki.exist? then
      raise Gollum::InvalidGitRepositoryError
    end
    if wiki_options[:plantuml_url]
      Gollum::Filter::PlantUML.configure do |config|
        puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
        config.url = wiki_options[:plantuml_url]
      end
    end
    puts
    puts 'Loaded Gollum wiki at:'
    puts '#{File.expand_path(gollum_path).inspect}'
    puts
    puts 'Example API calls:'
    puts %(    page = wiki.page('page-name'))
    puts %(    # => <Gollum::Page>)
    puts
    puts %(    page.raw_data)
    puts %(    # => '# My wiki page')
    puts
    puts %(    page.formatted_data)
    puts %(    # => '<h1>My wiki page</h1>')
    puts
    puts 'Full API documentation at:'
    puts 'https://github.com/gollum/gollum-lib'
    puts
    IRB.start_session(binding)
  rescue Gollum::InvalidGitRepositoryError, Gollum::NoSuchPathError
    puts 'Invalid Gollum wiki at #{File.expand_path(gollum_path).inspect}'
    exit 0
  end
else
  require 'gollum/app'
  Precious::App.set(:gollum_path, gollum_path)
  Precious::App.set(:wiki_options, wiki_options)
  Precious::App.settings.mustache[:templates] = wiki_options[:template_dir] if wiki_options[:template_dir]
    
            page_dir = settings.wiki_options[:page_file_dir].to_s
        redirect to('/#{clean_url(::File.join(encodeURIComponent(page_dir), encodeURIComponent(path), encodeURIComponent(name)))}')
      rescue Gollum::DuplicatePageError => e
        @message = 'Duplicate page: #{e.message}'
        mustache :error
      end
    end
    
    require 'rubocop/rake_task'
RuboCop::RakeTask.new
    
          module ClassMethods
        # Add helper methods that will be accessible from any
        # endpoint within this namespace (and child namespaces).
        #
        # When called without a block, all known helpers within this scope
        # are included.
        #
        # @param [Array] new_modules optional array of modules to include
        # @param [Block] block optional block of methods to include
        #
        # @example Define some helpers.
        #
        #     class ExampleAPI < Grape::API
        #       helpers do
        #         def current_user
        #           User.find_by_id(params[:token])
        #         end
        #       end
        #     end
        #
        # @example Include many modules
        #
        #     class ExampleAPI < Grape::API
        #       helpers Authentication, Mailer, OtherModule
        #     end
        #
        def helpers(*new_modules, &block)
          include_new_modules(new_modules) if new_modules.any?
          include_block(block) if block_given?
          include_all_in_scope if !block_given? && new_modules.empty?
        end
    
            # Specify additional content-types, e.g.:
        #   content_type :xls, 'application/vnd.ms-excel'
        def content_type(key, val)
          namespace_stackable(:content_types, key.to_sym => val)
        end