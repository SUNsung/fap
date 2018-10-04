
        
        def du_uploadtrailer_preview_correct_jpg
  mock_jpg = double
  allow(mock_jpg).to receive(:file_name).and_return('ftl_FAKEMD5_trailer-en-US_preview.jpg')
  allow(mock_jpg).to receive(:file_size).and_return(12_345)
  allow(mock_jpg).to receive(:content_type).and_return('image/jpg')
  allow(mock_jpg).to receive(:bytes).and_return('trailer preview...')
  mock_jpg
end
    
      context '#builds_for_group' do
    it 'executes the request' do
      MockAPI::TestFlightServer.get('/testflight/v2/providers/fake-team-id/apps/some-app-id/groups/fake-group-id/builds') {}
      subject.builds_for_group(app_id: app_id, group_id: 'fake-group-id')
      expect(WebMock).to have_requested(:get, 'https://appstoreconnect.apple.com/testflight/v2/providers/fake-team-id/apps/some-app-id/groups/fake-group-id/builds')
    end
  end
    
          it 'raises an error if something is wrong' do
        TunesStubbing.itc_stub_applications_broken_first_create
        expect do
          Spaceship::Tunes::Application.create!(name: 'My Name',
                                                sku: 'SKU123',
                                                bundle_id: 'net.sunapps.123')
        end.to raise_error('You must provide a company name to use on the App Store. You must provide a company name to use on the App Store.')
      end
    end
    
              zip_build_products_path = Scan.cache[:zip_build_products_path]
          Actions.lane_context[SharedValues::SCAN_ZIP_BUILD_PRODUCTS_PATH] = zip_build_products_path if zip_build_products_path
    
        def self.regular_expression_for_split_on_whitespace_followed_by_parenthesized_version
      # %r{
      #   \s # a whitespace character
      #   (?= # followed by -- using lookahead
      #   \( # open parenthesis
      #   [\d\.]+ # our version -- one or more digits or full stops
      #   \) # close parenthesis
      #   $ # end of line
      #   ) # end of lookahead
      # }
      /\s(?=\([\d\.]+\)$)/
    end
    
    require 'colored'
require 'shellwords'
    
          run!
    end
  end
end

    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    Capybara.javascript_driver = :poltergeist
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
      describe '#create' do
    let(:like_hash) {
      {post_id: @target.id}
    }