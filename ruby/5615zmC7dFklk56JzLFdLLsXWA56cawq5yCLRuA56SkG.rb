
        
        module Fastlane
  # Handles receiving commands from the socket server, finding the Action to be invoked,
  # invoking it, and returning any return values
  class SocketServerActionCommandExecutor < CommandExecutor
    attr_accessor :runner
    attr_accessor :actions_requiring_special_handling
    
    require 'commander'
    
          it 'Only include merge commits if merge_commit_filtering is only_include_merges' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits(merge_commit_filtering: 'only_include_merges')
        end').runner.execute(:test)
    
          it 'generates the correct git command with shell-escaped-paths' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/README.md', './LICENSE', './fastlane/spec/fixtures/git_commit/A FILE WITH SPACE'], message: 'message')
        end').runner.execute(:test)
    
            keychain = 'keychain with spaces.keychain'
        cmd = %r{curl -f -o (([A-Z]\:)?\/.+) https://developer\.apple\.com/certificationauthority/AppleWWDRCA.cer && security import \1 -k #{Regexp.escape(keychain.shellescape)}}
        require 'open3'
    
              @bar1 = Agents::DotBar.new(name: 'bar1').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.save!
          },
    
        describe 'url' do
      it 'should be invalid with an unreasonable URL' do
        subject.url = 'foo'
        expect(subject).not_to be_valid
        expect(subject).to have(1).error_on(:url)
        expect(subject.errors[:url]).to include('appears to be invalid')
      end
    
      it 'does not allow hash-style assignment' do
    expect {
      location[:lat] = 2.0
    }.to raise_error(NoMethodError)
  end
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
            @agent.trigger_web_request(request)
        expect(@agent.reload.memory['last_request']).to eq([ { 'some_param' => 'some_value' }, 'post', 'text/html' ])
        expect(@agent.last_web_request_at.to_i).to be_within(1).of(Time.now.to_i)
      end
    end
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        alias_method :insert_before, :insert
    
        def initialize
      @pages = {}
    end
    
          @terminal_width = if !tty?
        nil
      elsif ENV['COLUMNS']
        ENV['COLUMNS'].to_i
      else
        `stty size`.scan(/\d+/).last.to_i
      end
    rescue
      @terminal_width = nil
    end
  end
end

    
            css('td h3', '.l-sub-section > h3', '.alert h3', '.row-margin > h3', '.api-heading ~ h3', '.api-heading + h2', '.metadata-member h3').each do |node|
          node.name = 'h4'
        end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end