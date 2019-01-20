
        
          end
    
          if lounge.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('vip_category_description'),
          title: I18n.t('category.topic_prefix', category: lounge.name),
          category: lounge.name,
          archetype: Archetype.default,
          skip_validations: true
        )
        post = creator.create
    
            staff.topic_id = post.topic.id
        unless staff.save
          puts staff.errors.full_messages
          puts 'Failed to set the Staff category description topic!'
        end
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
    module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
            value
      end
    
          # The minimum number of requests we want to keep available.
      #
      # We don't use a value of 0 as multiple threads may be using the same
      # token in parallel. This could result in all of them hitting the GitHub
      # rate limit at once. The threshold is put in place to not hit the limit
      # in most cases.
      RATE_LIMIT_THRESHOLD = 50
    
            def sidekiq_worker_class
          ImportDiffNoteWorker
        end
    
            def id_for_already_imported_cache(issue)
          issue.number
        end
    
            # We inject the page number here to make sure that all importers always
        # start where they left off. Simply starting over wouldn't work for
        # repositories with a lot of data (e.g. tens of thousands of comments).
        options = collection_options.merge(page: page_counter.current)
    
            # Builds a lfs_object
        def self.from_api_response(lfs_object)
          new({ oid: lfs_object[0], download_link: lfs_object[1] })
        end
    
              hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
        def resource_params
      params.require(:report_note).permit(
        :content,
        :report_id
      )
    end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def future_expires
    Time.now.utc + lease_seconds_or_default
  end
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
end

    
          format('%20e', 109.52).should == '        1.095200e+02'
      format('%20E', 109.52).should == '        1.095200E+02'
      format('%20f', 10.952).should == '           10.952000'
      format('%20g', 12.1234).should == '             12.1234'
      format('%20G', 12.1234).should == '             12.1234'
      format('%20a', 196).should == '           0x1.88p+7'
      format('%20A', 196).should == '           0X1.88P+7'
    
          ruby_bug '#14846', '2.5'...'2.6' do
        it 'does not prepend caller information if line number is too big' do
          w = KernelSpecs::WarnInNestedCall.new
          -> { w.f4('foo', 100) }.should output(nil, 'warning: foo\n')
        end
      end
    
          start_offset = offset
      offset += scanner.matched.length
      val = Sass::Script::Value::String.value(scanner[1] || scanner[2])
      scanned = scanner.scan(/\s*/)
      if !scanner.match?(/[,;]|$/)
        offset += scanned.length if scanned
        media_parser = Sass::SCSS::Parser.new(scanner,
          @options[:filename], @options[:importer], @line, offset)
        media = media_parser.parse_media_query_list
        node = Tree::CssImportNode.new(quoted_val, media.to_a)
        node.source_range = Sass::Source::Range.new(
          Sass::Source::Position.new(@line, to_parser_offset(start_offset)),
          Sass::Source::Position.new(@line, media_parser.offset),
          @options[:filename], @options[:importer])
      elsif val =~ %r{^(https?:)?//}
        node = Tree::CssImportNode.new(quoted_val)
        node.source_range = Sass::Source::Range.new(
          Sass::Source::Position.new(@line, to_parser_offset(start_offset)),
          Sass::Source::Position.new(@line, to_parser_offset(offset)),
          @options[:filename], @options[:importer])
      else
        node = Tree::ImportNode.new(val)
        node.source_range = Sass::Source::Range.new(
          Sass::Source::Position.new(@line, to_parser_offset(start_offset)),
          Sass::Source::Position.new(@line, to_parser_offset(offset)),
          @options[:filename], @options[:importer])
      end
      node
    end
    # @comment
    #   rubocop:enable MethodLength
    
        desc 'Build all examples'
    task :build do
      Bundler.require 'xcodeproj', :development
      Dir['examples/*'].sort.each do |dir|
        Dir.chdir(dir) do
          puts 'Example: #{dir}'
    
    class Profile
  def pod_bin
    File.expand_path('../pod', __FILE__)
  end
    
    Given /^I add this snippet to the User model:$/ do |snippet|
  file_name = 'app/models/user.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') { |f| f << content.sub(/end\Z/, '#{snippet}\nend') }
  end
end
    
    ENV['RAILS_ENV'] = 'test'
    
        def empty_file?
      File.exist?(@filepath) && File.size(@filepath) == 0
    end