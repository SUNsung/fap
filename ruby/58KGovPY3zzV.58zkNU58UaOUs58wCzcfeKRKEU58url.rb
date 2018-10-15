
        
        require 'benchmark/ips'
require 'jekyll'
require 'json'
    
      matter = matter.join.chomp
  content = \
    if !input_hash['input'] || !input_hash['filter']
      then input_hash['content']
    else '{{ #{input_hash['input']} | ' \
        '#{input_hash['filter']} }}'
    end
    
    Badge.seed do |b|
  b.id = Badge::Anniversary
  b.name = 'Anniversary'
  b.default_icon = 'fa-clock-o'
  b.badge_type_id = BadgeType::Silver
  b.default_badge_grouping_id = BadgeGrouping::Community
  b.query = nil
  b.trigger = Badge::Trigger::None
  b.auto_revoke = false
  b.system = true
  b.multiple_grant = true
end
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
          it 'analytics session: launch' do
        expect(SecureRandom).to receive(:uuid).and_return(session_id)
    
          def self.details
        list = <<-LIST.markdown_list
          `grouping` is just to keep your tags organised under one 'folder', defaults to 'builds'
          `lane` is the name of the current fastlane lane
          `prefix` is anything you want to stick in front of the version number, e.g. 'v'
          `postfix` is anything you want to stick at the end of the version number, e.g. '-RC1'
          `build_number` is the build number, which defaults to the value emitted by the `increment_build_number` action
        LIST
    
              expect(UI).to have_received(:shell_error!).with('Exit status of command 'exit 1' was 1 instead of 0.\n')
        end
      end
    end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
      protected
    
      end
end
    
      # Generate a friendly string randomly to be used as token.
  # By default, length is 20 characters.
  def self.friendly_token(length = 20)
    # To calculate real characters, we must perform this operation.
    # See SecureRandom.urlsafe_base64
    rlength = (length * 3) / 4
    SecureRandom.urlsafe_base64(rlength).tr('lIO0', 'sxyz')
  end
    
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
    
          attr_reader :page, :name
    
          def format
        @format = (@page.format || false) if @format.nil?
        @format.to_s.downcase
      end
    end
  end
end

    
          def has_path
        !@path.nil?
      end
    
        assert_match /Delete this Page/, last_response.body, ''Delete this Page' link is blocked in page template'
    assert_match /New/,              last_response.body, ''New' button is blocked in page template'
    assert_match /Upload/,           last_response.body, ''Upload' link is blocked in page template'
    assert_match /Rename/,           last_response.body, ''Rename' link is blocked in page template'
    assert_match /Edit/,             last_response.body, ''Edit' link is blocked in page template'
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
        # Title is based on file name when h1_title is false.
    actual = @view.title
    assert_equal 'H1', title
  end
end

    
      def self.assets_path
    ::File.expand_path('gollum/public', ::File.dirname(__FILE__))
  end