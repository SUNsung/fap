
        
            def internal?
      !external?
    end
    
          [poll]
      1. test 1
      2. test 2
      [/poll]
    
        def process!
      begin
        @receiver = Email::Receiver.new(@mail)
        @receiver.process!
      rescue RateLimiter::LimitExceeded
        @retry_on_rate_limit ? Jobs.enqueue(:process_email, mail: @mail) : raise
      rescue => e
        return handle_bounce(e) if @receiver.is_bounce?
    
      def self.public_valid_options
    @public_valid_options ||=
      %i(page
         before
         bumped_before
         topic_ids
         exclude_category_ids
         category
         order
         ascending
         min_posts
         max_posts
         status
         filter
         state
         search
         q
         group_name
         tags
         match_all_tags
         no_subcategories
         no_tags)
  end
    
    # == Schema Information
#
# Table name: invites
#
#  id             :integer          not null, primary key
#  invite_key     :string(32)       not null
#  email          :string
#  invited_by_id  :integer          not null
#  user_id        :integer
#  redeemed_at    :datetime
#  created_at     :datetime         not null
#  updated_at     :datetime         not null
#  deleted_at     :datetime
#  deleted_by_id  :integer
#  invalidated_at :datetime
#  moderator      :boolean          default(FALSE), not null
#  custom_message :text
#  via_email      :boolean          default(FALSE), not null
#
# Indexes
#
#  index_invites_on_email_and_invited_by_id  (email,invited_by_id)
#  index_invites_on_invite_key               (invite_key) UNIQUE
#

    
      def perform_create_post
    result = NewPostResult.new(:create_post)
    creator = PostCreator.new(@user, @args)
    post = creator.create
    result.check_errors_from(creator)
    
        response = success_json.merge(users_not_added: invalid_users)
    
          response_body = JSON.parse(response.body)
    
        def create_file_from_object(obj, include_download_source = false)
      expires = S3Helper::DOWNLOAD_URL_EXPIRES_AFTER_SECONDS
      BackupFile.new(
        filename: File.basename(obj.key),
        size: obj.size,
        last_modified: obj.last_modified,
        source: include_download_source ? presigned_url(obj, :get, expires) : nil
      )
    end
    
          def find_matching_tag(tag)
        # Used primarily by developers testing beta macOS releases.
        if OS::Mac.prerelease? && ARGV.skip_or_later_bottles?
          generic_find_matching_tag(tag)
        else
          generic_find_matching_tag(tag) ||
            find_older_compatible_tag(tag)
        end
      end
    
              find_method_with_args(body_node, :system, 'xcodebuild') do
            problem %q(use 'xcodebuild *args' instead of 'system 'xcodebuild', *args')
          end
    
        it 'ignores OS version specifications' do
      f = formula 'foo' do
        url 'foo-1.0'
    
    module Cask
  module Metadata
    METADATA_SUBDIR = '.metadata'
    TIMESTAMP_FORMAT = '%Y%m%d%H%M%S.%L'
    
          def _help_for(klass)
        klass.respond_to?(:help) ? klass.help : nil
      end
    end
  end
end

    
        odie 'This command requires at least one formula argument!' if ARGV.named.empty?
    
      def test_error_handling
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.acos('2') }
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.log('2') }
    assert_raise(ArgumentError) { CMath.log(2, '2') }
    assert_raise(NoMethodError) { CMath.log(2, 2i) }
    assert_raise(RangeError) { CMath.hypot(2i, 2i) }
  end
    
        assert_equal '(a, b)', m.param_seq
    
        n1.update_aliases
    
        refute const.documented?
    
      def test_add_comment
    file1 = @store.add_file 'file1.rb'
    
      def test_class_read_file_encoding_iso_2022_jp
    input = '# coding: ISO-2022-JP\n:\e$B%3%^%s%I\e(B:'
    
      attr_reader :store
    
        @klass.add_constant @const
    @klass.add_method @meth
    @klass.add_attribute @attr
    
        store = RDoc::RI::Store.new @tmpdir
    store.load_cache
    
        raw = <<-RAW
#{paragraph1}
    
        [Post, Comment, AspectMembership, User].each do |model|
      create_hash(model, :range => range)
    end
    
      def set_up_contacts_json
    type = params[:set].presence
    if params[:a_id].present?
      type ||= 'by_aspect'
      @aspect = current_user.aspects.find(params[:a_id])
    end
    type ||= 'receiving'
    contacts_by_type(type).paginate(page: params[:page], per_page: 25)
                          .map {|c| ContactPresenter.new(c, current_user).full_hash_with_person }
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      def render_as_json(unread_count, unread_count_by_type, notification_list)
    {
      unread_count:         unread_count,
      unread_count_by_type: unread_count_by_type,
      notification_list:    notification_list.map {|note|
        NotificationSerializer.new(note, default_serializer_options).as_json
      }
    }.as_json
  end
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
    Then(/^it creates the file with the remote_task prerequisite$/) do
  TestApp.linked_files.each do |file|
    run_vagrant_command(test_file_exists(TestApp.shared_path.join(file)))
  end
end
    
    Given(/^servers with the roles app and web$/) do
  begin
    vagrant_cli_command('up')
  rescue
    nil
  end
end
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
        def remove(key, *values)
      set(key, Array(fetch(key)) - values)
    end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
      it 'lists active memberships' do
    chat_channel = ChatChannel.create_with_users([create(:user), create(:user)])
    expect(chat_channel.active_users.size).to eq(2)
    expect(chat_channel.channel_users.size).to eq(2)
  end
    
          it 'Does not render below article html variant for short article' do
        html_variant = create(:html_variant, published: true, approved: true, group: 'article_show_below_article_cta')
        article.update_column(:body_markdown, rand(36**100).to_s(36).to_s) # ensure too short
        get article.path + '?variant_version=0'
        expect(response.body).not_to include html_variant.html
      end
    
      it 'renders a podcast index if there is a podcast with the slug successfully' do
    expect(get: '/#{podcast.slug}').to route_to(
      controller: 'stories',
      action: 'index',
      username: podcast.slug,
    )
  end
    
    RSpec.describe MembershipService do
  let(:user_one)            { create(:user, :super_admin) }
  let(:user_two)            { create(:user, :super_admin) }
  let(:stripe_helper)       { StripeMock.create_test_helper }
  let(:stripe_source_token) { stripe_helper.generate_card_token }
    
      before { instance.extend Tmuxinator::WemuxSupport }
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
            it 'should call ::start' do
          expect(cli).to receive(:start).with(args)
          subject
        end
      end
    
          def local_project
        [LOCAL_DEFAULT].detect { |f| File.exist?(f) }
      end