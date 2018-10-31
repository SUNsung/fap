
        
              GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(2)
      expect(limit_reached_for(user.id, dt)).to eq(true)
    
    # pulling this out cause I don't want an observer
describe Notification do
  describe '#recent_report' do
    let(:user) { Fabricate(:user) }
    let(:post) { Fabricate(:post) }
    
    BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
      def set_statuses
    return unless page_requested?
    
        def destroy
      authorize @report_note, :destroy?
      @report_note.destroy!
      redirect_to admin_report_path(@report_note.report_id), notice: I18n.t('admin.report_notes.destroyed_msg')
    end
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
    module Sass
  module CacheStores
    # A backend for the Sass cache using the filesystem.
    class Filesystem < Base
      # The directory where the cached files will be stored.
      #
      # @return [String]
      attr_accessor :cache_location
    
        # variable
    # Script::Value
    inherited_hash_writer :var
    
        # Wraps the given string in terminal escapes
    # causing it to have the given color.
    # If terminal escapes aren't supported on this platform,
    # just returns the string instead.
    #
    # @param color [Symbol] The name of the color to use.
    #   Can be `:red`, `:green`, or `:yellow`.
    # @param str [String] The string to wrap in the given color.
    # @return [String] The wrapped string.
    def color(color, str)
      raise '[BUG] Unrecognized color #{color}' unless COLORS[color]
    
            # JRuby chokes when trying to import files from JARs when the path starts with './'.
        ret.map {|f, s| [f.sub(%r{^\./}, ''), s]}
      end