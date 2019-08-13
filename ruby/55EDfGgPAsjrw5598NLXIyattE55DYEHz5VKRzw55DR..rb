
        
        def codepoints_to_unicode(codepoints)
  if codepoints.include?(' ')
    codepoints.split(' ').map(&:hex).pack('U*')
  else
    [codepoints.hex].pack('U')
  end
end
    
        let(:follow)  { double(account: account, errors: errors) }
    let(:errors)  { double(add: nil) }
    let(:account) { double(nil?: _nil, local?: local, following_count: 0, followers_count: 0) }
    let(:_nil)    { true }
    let(:local)   { false }
    
      def eligible_users
    User.emailable
        .where('current_sign_in_at < ?', (FREQUENCY + SIGN_IN_OFFSET).ago)
        .where('last_emailed_at IS NULL OR last_emailed_at < ?', FREQUENCY.ago)
  end
end

    
          it 'sends email' do
        is_expected.to change(ActionMailer::Base.deliveries, :count).by(1)
      end
    end
    
            let(:object_json) do
          {
            id: 'https://example.com/actor#bar',
            type: 'Note',
            content: 'Lorem ipsum',
            to: 'http://example.com/followers',
            attributedTo: 'https://example.com/actor',
          }
        end
    
    SimpleForm.setup do |config|
  # Wrappers are used by the form builder to generate a
  # complete input. You can remove any component from the
  # wrapper, change the order or even add your own to the
  # stack. The options given below are used to wrap the
  # whole input.
  config.wrappers :default, class: :input, hint_class: :field_with_hint, error_class: :field_with_errors do |b|
    ## Extensions enabled by default
    # Any of these extensions can be disabled for a
    # given input by passing: `f.input EXTENSION_NAME => false`.
    # You can make any of these extensions optional by
    # renaming `b.use` to `b.optional`.
    
    # create and write to opml file
xml = Builder::XmlMarkup.new(indent: 2)
xml.instruct! :xml, version: '1.0', encoding: 'UTF-8'
xml.tag!('opml', version: '1.0') do
  # head
  xml.tag!('head') do
    xml.title TITLE
  end
    
        template = (@article.decorate.cached_tag_list_array & SHE_CODED_TAGS).any? ? 'shecoded' : 'article'